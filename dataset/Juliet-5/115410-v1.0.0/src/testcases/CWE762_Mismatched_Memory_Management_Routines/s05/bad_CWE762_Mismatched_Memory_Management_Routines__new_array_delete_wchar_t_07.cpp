static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new wchar_t[100];
    }
    if(staticFive==5)
    {
<START>
        delete data;
<END>
    }
}
} 
