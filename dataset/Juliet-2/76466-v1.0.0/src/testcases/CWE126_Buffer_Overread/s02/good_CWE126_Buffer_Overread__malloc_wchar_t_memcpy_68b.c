wchar_t * VAR0;
wchar_t * VAR1;
void FUN0();
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    VAR1 = data;
    FUN0();
}
extern wchar_t * VAR0;
extern wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR1;
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
        memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}
