static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticFive==5)
    {
<START>
        printLongLine(*data);
<END>
    }
}
} 
