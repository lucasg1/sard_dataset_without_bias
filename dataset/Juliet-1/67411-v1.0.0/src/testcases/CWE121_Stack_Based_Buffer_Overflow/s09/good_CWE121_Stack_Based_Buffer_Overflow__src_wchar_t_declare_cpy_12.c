void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    else
    {
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
        wcscpy(dest, data);
        printWLine(data);
    }
}
