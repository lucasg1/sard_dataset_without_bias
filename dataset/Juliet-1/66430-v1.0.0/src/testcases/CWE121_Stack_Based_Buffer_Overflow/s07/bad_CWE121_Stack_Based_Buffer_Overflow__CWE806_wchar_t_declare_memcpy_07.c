static int staticFive = 5;
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    if(staticFive==5)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
<START>
        memcpy(dest, data, wcslen(data)*sizeof(wchar_t));
<END>
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}
