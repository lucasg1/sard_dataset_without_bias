void FUN0()
{
    wchar_t * data;
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        ; 
    }
    if(globalFive==5)
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN2()
{
    wchar_t * data;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
    }
    if(globalFive==5)
    {
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    if(globalFive==5)
    {
        data = L"string";
    }
    if(globalFive==5)
    {
        printWLine(data);
    }
}
