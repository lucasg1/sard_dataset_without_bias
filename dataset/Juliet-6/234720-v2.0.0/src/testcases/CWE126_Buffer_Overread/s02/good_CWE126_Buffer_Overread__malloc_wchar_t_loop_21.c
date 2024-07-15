static int VAR0 = 0;
static int VAR1 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    VAR0 = 0; 
    data = FUN0(data);
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
static wchar_t * FUN2(wchar_t * data)
{
    if(VAR1)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    return data;
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    VAR1 = 1; 
    data = FUN2(data);
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
