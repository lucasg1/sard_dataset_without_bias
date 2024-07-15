wchar_t * FUN0(wchar_t * data)
{
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    data = FUN0(data);
    {
        wchar_t dest[50] = L"";
        wcsncpy(dest, data, wcslen(data));
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
