namespace NAMESPACE0
{
void FUN0(char * dataArray[]);
void FUN1()
{
    char * data;
    char * dataArray[5];
    data = NULL; 
    {
        static char dataBuffer;
        dataBuffer = 'A';
        data = &dataBuffer;
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
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
