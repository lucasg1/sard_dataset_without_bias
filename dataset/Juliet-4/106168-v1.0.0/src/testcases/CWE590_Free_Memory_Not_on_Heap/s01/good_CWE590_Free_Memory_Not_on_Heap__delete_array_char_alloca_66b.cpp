namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = NULL; 
    {
        char * dataBuffer = new char[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    printLine(data);
    delete [] data;
}
} 
