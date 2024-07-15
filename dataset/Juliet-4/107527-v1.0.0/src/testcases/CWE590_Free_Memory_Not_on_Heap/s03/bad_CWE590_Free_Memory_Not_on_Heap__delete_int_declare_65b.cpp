namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL; 
    {
        int dataBuffer;
        dataBuffer = 5;
        data = &dataBuffer;
    }
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 
