void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN1(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    FUN1(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
        size_t i, dataLen;
        dataLen = wcslen(data);
        for (i = 0; i < dataLen; i++)
        {
            dest[i] = data[i];
        }
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
