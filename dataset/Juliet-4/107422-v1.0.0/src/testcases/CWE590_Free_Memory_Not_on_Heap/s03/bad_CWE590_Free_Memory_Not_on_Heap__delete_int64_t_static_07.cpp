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
            static int64_t dataBuffer;
            dataBuffer = 5LL;
            data = &dataBuffer;
        }
    }
    printLongLongLine(*data);
<START>
    delete data;
<END>
}
} 
