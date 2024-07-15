void FUN0(wchar_t * * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    FUN0(&data);
}
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
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
        free(data);
    }
}
