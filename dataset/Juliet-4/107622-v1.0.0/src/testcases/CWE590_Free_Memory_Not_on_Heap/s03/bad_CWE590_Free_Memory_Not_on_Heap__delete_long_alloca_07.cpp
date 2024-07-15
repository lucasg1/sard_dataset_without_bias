static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    if(staticFive==5)
    {
        {
            long * dataBuffer = (long *)ALLOCA(sizeof(long));
            *dataBuffer = 5L;
            data = dataBuffer;
        }
    }
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
