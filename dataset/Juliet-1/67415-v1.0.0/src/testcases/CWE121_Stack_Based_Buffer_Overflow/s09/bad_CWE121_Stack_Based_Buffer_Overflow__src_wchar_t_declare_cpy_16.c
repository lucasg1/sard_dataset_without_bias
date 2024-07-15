void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    while(1)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
        break;
    }
    {
        wchar_t dest[50] = L"";
<START>
        wcscpy(dest, data);
<END>
        printWLine(data);
    }
}
