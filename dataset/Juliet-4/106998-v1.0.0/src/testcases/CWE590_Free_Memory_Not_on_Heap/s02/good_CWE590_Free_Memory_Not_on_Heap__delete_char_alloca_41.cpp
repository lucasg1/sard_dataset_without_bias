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
    data = NULL; 
    {
        char * dataBuffer = new char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    FUN0(data);
}
} 
