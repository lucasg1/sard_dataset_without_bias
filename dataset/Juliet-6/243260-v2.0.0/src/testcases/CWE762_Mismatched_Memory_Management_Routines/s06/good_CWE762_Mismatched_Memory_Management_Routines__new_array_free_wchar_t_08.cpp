static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(FUN0())
    {
        data = new wchar_t[100];
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete [] data;
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(FUN0())
    {
        data = new wchar_t[100];
    }
    if(FUN0())
    {
        delete [] data;
    }
}
void FUN4()
{
    wchar_t * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(FUN0())
    {
        free(data);
    }
}
void FUN5()
{
    wchar_t * data;
    data = NULL;
    if(FUN0())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
    }
    if(FUN0())
    {
        free(data);
    }
}
} 
