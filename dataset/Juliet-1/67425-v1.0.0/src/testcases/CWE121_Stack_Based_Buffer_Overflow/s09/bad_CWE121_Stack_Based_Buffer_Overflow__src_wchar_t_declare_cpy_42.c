static wchar_t * FUN0(wchar_t * data)
{
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    data = FUN0(data);
    {
        wchar_t dest[50] = L"";
<START>
        wcscpy(dest, data);
<END>
        printWLine(data);
    }
}
