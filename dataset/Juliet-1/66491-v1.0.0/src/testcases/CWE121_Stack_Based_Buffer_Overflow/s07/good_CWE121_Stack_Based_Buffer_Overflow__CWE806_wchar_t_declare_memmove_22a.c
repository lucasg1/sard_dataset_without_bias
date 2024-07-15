extern int VAR0;
extern int VAR1;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
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
wchar_t * FUN1(wchar_t * data)
{
    if(VAR1)
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    VAR0 = 0; 
    data = FUN0(data);
    {
        wchar_t dest[50] = L"";
        memmove(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
wchar_t * FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    VAR1 = 1; 
    data = FUN1(data);
    {
        wchar_t dest[50] = L"";
        memmove(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
