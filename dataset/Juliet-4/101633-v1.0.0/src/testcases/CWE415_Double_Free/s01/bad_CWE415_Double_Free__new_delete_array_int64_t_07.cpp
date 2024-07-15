static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t[100];
        delete [] data;
    }
    if(staticFive==5)
    {
<START>
        delete [] data;
<END>
    }
}
} 
