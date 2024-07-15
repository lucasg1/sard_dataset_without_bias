void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN1(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t * dataBuffer = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer - 8;
    }
    FUN3(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
<START>
        memmove(dest, data, 100*sizeof(wchar_t));
<END>
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
