void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    goto source;
source:
    data[0] = L'\0'; 
    {
        size_t sourceLen;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        sourceLen = wcslen(source);
        wcsncat(data, source, sourceLen);
        printWLine(data);
    }
}
