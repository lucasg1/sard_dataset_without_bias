void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer;
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1); 
            dest[100-1] = L'\0'; 
            memcpy(dest, data, 100*sizeof(wchar_t));
            dest[100-1] = L'\0';
            printWLine(dest);
        }
    }
}
