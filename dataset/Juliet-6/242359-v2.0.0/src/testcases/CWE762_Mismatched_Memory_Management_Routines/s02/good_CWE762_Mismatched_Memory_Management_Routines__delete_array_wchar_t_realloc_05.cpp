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
        data = NULL;
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = NULL;
        data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
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
        data = new wchar_t[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t[100];
    }
    if(staticTrue)
    {
        delete [] data;
    }
}
} 
