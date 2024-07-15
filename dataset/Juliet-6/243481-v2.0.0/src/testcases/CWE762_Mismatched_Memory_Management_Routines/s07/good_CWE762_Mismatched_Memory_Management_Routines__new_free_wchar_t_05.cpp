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
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t;
    }
    if(staticTrue)
    {
        delete data;
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
} 
