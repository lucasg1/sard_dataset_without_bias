namespace NAMESPACE0
{
void FUN0(char * data)
{
    delete data;
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = new char;
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
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
