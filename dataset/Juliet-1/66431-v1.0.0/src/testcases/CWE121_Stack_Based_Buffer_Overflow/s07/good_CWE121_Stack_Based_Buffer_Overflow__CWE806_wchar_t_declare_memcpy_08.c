static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(FUN0())
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
