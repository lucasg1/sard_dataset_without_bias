void FUN0()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    if(globalReturnsTrueOrFalse())
    {
        data = dataBuffer;
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
