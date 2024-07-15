static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticTrue)
    {
<START>
        printLongLine(*data);
<END>
    }
}
} 
