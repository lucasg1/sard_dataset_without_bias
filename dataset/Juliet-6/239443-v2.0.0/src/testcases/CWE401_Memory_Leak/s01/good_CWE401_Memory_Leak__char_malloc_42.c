static char * FUN0(char * data)
{
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    ; 
}
static char * FUN2(char * data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    return data;
}
void FUN3()
{
    char * data;
    data = NULL;
    data = FUN2(data);
    free(data);
}
