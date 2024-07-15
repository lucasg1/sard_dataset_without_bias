static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticFive==5)
    {
<START>
        delete data;
<END>
    }
}
} 
