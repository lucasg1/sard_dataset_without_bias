namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t[100];
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = new wchar_t[100];
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(globalTrue)
    {
        delete[] data;
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(globalFalse)
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
    if(globalTrue)
    {
        ; 
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        wchar_t VAR1[100];
        data = VAR1;
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(globalTrue)
    {
        ; 
    }
}
} 
