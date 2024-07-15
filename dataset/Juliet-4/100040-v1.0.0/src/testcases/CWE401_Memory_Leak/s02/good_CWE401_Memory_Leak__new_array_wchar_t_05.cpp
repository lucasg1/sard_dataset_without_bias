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
        data = new wchar_t[100];
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete[] data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t[100];
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticTrue)
    {
        delete[] data;
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
        wchar_t VAR1[100];
        data = VAR1;
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        wchar_t VAR1[100];
        data = VAR1;
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticTrue)
    {
        ; 
    }
}
} 
