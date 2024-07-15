namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = new wchar_t[100];
    VAR1 = 0; 
    data = FUN0(data);
    {
        wchar_t dest[50] = L"";
        wcscat(dest, data);
        printWLine(data);
        delete [] data;
    }
    ;
}
static wchar_t * FUN2(wchar_t * data)
{
    if(VAR2)
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    return data;
}
void FUN3()
{
    wchar_t * data;
    data = new wchar_t[100];
    VAR2 = 1; 
    data = FUN2(data);
    {
        wchar_t dest[50] = L"";
        wcscat(dest, data);
        printWLine(data);
        delete [] data;
    }
    ;
}
} 
