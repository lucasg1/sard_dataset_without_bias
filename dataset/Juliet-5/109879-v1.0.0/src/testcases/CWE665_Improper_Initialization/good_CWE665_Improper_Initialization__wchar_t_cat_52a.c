void FUN0(wchar_t * data)
{
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscat(data, source);
        printWLine(data);
    }
}
void FUN0(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN4()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    data[0] = L'\0'; 
    FUN2(data);
}
