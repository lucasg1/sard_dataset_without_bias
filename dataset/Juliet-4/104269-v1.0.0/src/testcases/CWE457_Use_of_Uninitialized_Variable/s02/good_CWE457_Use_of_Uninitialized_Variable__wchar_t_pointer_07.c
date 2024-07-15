static int staticFive = 5;
void FUN0()
{
    wchar_t * data;
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive==5)
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN2()
{
    wchar_t * data;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
    }
    if(staticFive==5)
    {
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    if(staticFive==5)
    {
        data = L"string";
    }
    if(staticFive==5)
    {
        printWLine(data);
    }
}
