void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
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
}
