namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    data = NULL; 
    {
        char buffer[sizeof(int)];
        int * dataBuffer = new(buffer) int;
        *dataBuffer = 5;
        data = dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
