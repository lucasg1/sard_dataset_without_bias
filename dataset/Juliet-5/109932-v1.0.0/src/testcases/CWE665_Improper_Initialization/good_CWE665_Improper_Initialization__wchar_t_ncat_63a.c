void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
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
void FUN0(wchar_t * * data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    data[0] = L'\0'; 
    FUN0(&data);
}
