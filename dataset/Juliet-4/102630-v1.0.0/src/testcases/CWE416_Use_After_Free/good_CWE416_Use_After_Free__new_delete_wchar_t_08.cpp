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
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(FUN0())
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(FUN0())
    {
        ; 
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
        data = new wchar_t;
        *data = L'A';
    }
    if(FUN0())
    {
        printWcharLine(*data);
    }
}
void FUN5()
{
    wchar_t * data;
    data = NULL;
    if(FUN0())
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(FUN0())
    {
        printWcharLine(*data);
    }
}
} 
