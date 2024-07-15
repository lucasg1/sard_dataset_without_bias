void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN4(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN4(data);
}
void FUN3(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN3(data);
}
void FUN2(wchar_t * data)
{
    {
        size_t i, destLen;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        destLen = wcslen(dest);
        for (i = 0; i < destLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}
