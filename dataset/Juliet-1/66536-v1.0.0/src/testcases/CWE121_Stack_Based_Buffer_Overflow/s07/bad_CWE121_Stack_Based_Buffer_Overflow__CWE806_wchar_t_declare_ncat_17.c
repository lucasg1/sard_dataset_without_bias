void FUN0()
{
    int i;
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
<START>
        wcsncat(dest, data, wcslen(data));
<END>
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
