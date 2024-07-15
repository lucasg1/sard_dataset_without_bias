void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    data = dataBuffer;
    FUN0(data);
}
void FUN3(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN3(data);
}
void FUN4(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN4(data);
}
void FUN3(wchar_t * data)
{
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        memcpy(dest, data, 100*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
