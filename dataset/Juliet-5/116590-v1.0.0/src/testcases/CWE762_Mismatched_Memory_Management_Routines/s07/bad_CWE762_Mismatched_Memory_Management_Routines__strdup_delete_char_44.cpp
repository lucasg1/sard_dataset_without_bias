namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
    }
    funcPtr(data);
}
} 
