namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = new char[100];
    funcPtr(data);
}
} 
