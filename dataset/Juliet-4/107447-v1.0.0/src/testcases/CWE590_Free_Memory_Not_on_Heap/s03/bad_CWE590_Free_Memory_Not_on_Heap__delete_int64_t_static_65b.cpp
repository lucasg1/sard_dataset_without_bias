namespace NAMESPACE0
{
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL; 
    {
        static int64_t dataBuffer;
        dataBuffer = 5LL;
        data = &dataBuffer;
    }
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
