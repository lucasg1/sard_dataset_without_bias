namespace NAMESPACE0
{
void FUN0(char * data)
{
    delete [] data;
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = new char[100];
    funcPtr(data);
}
void FUN2(char * data)
{
    ; 
}
void FUN3()
{
    char * data;
    void (*funcPtr) (char *) = FUN2;
    data = NULL;
    data = new char[100];
    delete [] data;
    funcPtr(data);
}
} 
