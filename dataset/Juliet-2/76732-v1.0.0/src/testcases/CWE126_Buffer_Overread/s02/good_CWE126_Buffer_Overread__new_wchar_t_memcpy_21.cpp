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
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
    ;
}
static wchar_t * FUN2(wchar_t * data)
{
    if(VAR2)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    return data;
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN2(data);
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        delete [] data;
    }
    ;
}
} 
