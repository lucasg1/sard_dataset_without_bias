namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
    ; 
}
void FUN2(char * &data)
{
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
}
void FUN3()
{
    char * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 
