static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t;
        delete data;
    }
    if(staticTrue)
    {
<START>
        delete data;
<END>
    }
}
} 
