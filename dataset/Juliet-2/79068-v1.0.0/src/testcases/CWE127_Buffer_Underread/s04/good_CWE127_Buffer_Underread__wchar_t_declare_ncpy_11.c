void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = dataBuffer;
    }
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        wcsncpy(dest, data, wcslen(dest));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    if(globalReturnsTrue())
    {
        data = dataBuffer;
    }
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        wcsncpy(dest, data, wcslen(dest));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}