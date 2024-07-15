void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    wmemset(dataBadBuffer, L'A', 50-1); 
    dataBadBuffer[50-1] = L'\0'; 
    wmemset(dataGoodBuffer, L'A', 100-1); 
    dataGoodBuffer[100-1] = L'\0'; 
    {
        wchar_t * data = *dataPtr1;
        data = dataGoodBuffer;
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            size_t i, destLen;
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1);
            dest[100-1] = L'\0'; 
            destLen = wcslen(dest);
            for (i = 0; i < destLen; i++)
            {
                dest[i] = data[i];
            }
            dest[100-1] = L'\0';
            printWLine(dest);
        }
    }
}
