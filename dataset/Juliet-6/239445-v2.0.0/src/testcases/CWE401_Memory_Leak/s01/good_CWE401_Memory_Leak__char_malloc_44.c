void FUN0(char * data)
{
    ; 
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    funcPtr(data);
}
void FUN2(char * data)
{
    free(data);
}
void FUN3()
{
    char * data;
    void (*funcPtr) (char *) = FUN2;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    funcPtr(data);
}
