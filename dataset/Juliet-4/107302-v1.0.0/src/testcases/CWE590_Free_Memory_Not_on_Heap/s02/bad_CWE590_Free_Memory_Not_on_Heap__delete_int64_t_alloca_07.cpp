static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    if(staticFive==5)
    {
        {
            int64_t * dataBuffer = (int64_t *)ALLOCA(sizeof(int64_t));
            *dataBuffer = 5LL;
            data = dataBuffer;
        }
    }
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
