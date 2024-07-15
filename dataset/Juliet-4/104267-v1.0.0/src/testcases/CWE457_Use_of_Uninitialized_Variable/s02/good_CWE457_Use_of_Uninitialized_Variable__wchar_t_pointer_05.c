static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t * data;
    if(staticTrue)
    {
        ; 
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    if(staticTrue)
    {
        ; 
    }
    if(staticTrue)
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN2()
{
    wchar_t * data;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
    }
    if(staticTrue)
    {
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    if(staticTrue)
    {
        data = L"string";
    }
    if(staticTrue)
    {
        printWLine(data);
    }
}
