namespace NAMESPACE0
{
void FUN0(char * data)
{
    ; 
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    char VAR1;
    data = &VAR1;
    *data = 'A';
    printHexCharLine(*data);
    funcPtr(data);
}
void FUN2(char * data)
{
    delete data;
}
void FUN3()
{
    char * data;
    void (*funcPtr) (char *) = FUN2;
    data = NULL;
    data = new char;
    *data = 'A';
    printHexCharLine(*data);
    funcPtr(data);
}
} 
