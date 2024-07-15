namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    goto source;
source:
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    printLine(data);
    delete [] data;
}
} 
