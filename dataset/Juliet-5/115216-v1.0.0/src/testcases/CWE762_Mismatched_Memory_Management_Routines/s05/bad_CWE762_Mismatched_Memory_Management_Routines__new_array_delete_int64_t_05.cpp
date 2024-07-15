static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int64_t[100];
    }
    if(staticTrue)
    {
<START>
        delete data;
<END>
    }
}
} 
