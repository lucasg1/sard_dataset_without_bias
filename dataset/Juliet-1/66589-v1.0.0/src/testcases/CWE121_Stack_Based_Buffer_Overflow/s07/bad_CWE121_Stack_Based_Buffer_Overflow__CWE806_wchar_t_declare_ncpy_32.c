void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t dest[50] = L"";
<START>
            wcsncpy(dest, data, wcslen(data));
<END>
            dest[50-1] = L'\0'; 
            printWLine(data);
        }
    }
}
