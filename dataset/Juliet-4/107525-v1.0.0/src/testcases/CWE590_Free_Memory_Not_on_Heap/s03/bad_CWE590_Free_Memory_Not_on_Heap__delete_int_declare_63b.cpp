namespace NAMESPACE0
{
void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = NULL; 
    {
        int dataBuffer;
        dataBuffer = 5;
        data = &dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
