char * FUN0(char * data)
{
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    return data;
}
char * FUN1(char * data)
{
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    return data;
}
char * FUN0(char * data);
void FUN3()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    ; 
}
char * FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = FUN1(data);
    free(data);
}
