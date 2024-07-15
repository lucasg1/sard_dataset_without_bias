namespace NAMESPACE0
{
void FUN0(char * data)
{
    printHexCharLine(*data);
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
        char dataBuffer;
        dataBuffer = 'A';
        data = &dataBuffer;
    }
    funcPtr(data);
}
} 
