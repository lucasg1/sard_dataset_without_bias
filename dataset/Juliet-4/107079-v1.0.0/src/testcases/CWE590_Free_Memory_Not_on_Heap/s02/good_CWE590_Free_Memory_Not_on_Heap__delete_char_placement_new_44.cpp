namespace NAMESPACE0
{
void FUN0(char * data)
{
    printHexCharLine(*data);
    delete data;
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL; 
    {
        char * dataBuffer = new char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    funcPtr(data);
}
} 
