static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int[100];
    }
    if(staticTrue)
    {
<START>
        delete data;
<END>
    }
}
} 
