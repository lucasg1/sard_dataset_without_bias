namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    {
        char * dataCopy = data;
        char * data = dataCopy;
        printLine(data);
        delete [] data;
    }
}
} 
