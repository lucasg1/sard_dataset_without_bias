namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    {
        char * dataBuffer = new char;
        *dataBuffer = 'A';
        data = dataBuffer;
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
        printHexCharLine(*data);
        delete data;
    }
}
} 
