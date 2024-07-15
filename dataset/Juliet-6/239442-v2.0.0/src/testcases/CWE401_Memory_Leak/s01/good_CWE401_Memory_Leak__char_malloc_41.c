void FUN0(char * data)
{
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    FUN0(data);
}
void FUN2(char * data)
{
    free(data);
}
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    FUN2(data);
}
