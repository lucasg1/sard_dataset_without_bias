void FUN0(wchar_t * data)
{
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        memmove(dest, data, 100*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100];
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer;
    FUN0(data);
}
