namespace NAMESPACE0
{
void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char dataBuffer;
        dataBuffer = 'A';
        data = &dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    printHexCharLine(*data);
<START>
    delete data;
<END>
}
} 
