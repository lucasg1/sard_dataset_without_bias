void FUN0()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
        break;
    }
    {
        wchar_t dest[50] = L"";
        memmove(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    switch(6)
    {
    case 6:
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        wchar_t dest[50] = L"";
        memmove(dest, data, wcslen(data)*sizeof(wchar_t));
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
