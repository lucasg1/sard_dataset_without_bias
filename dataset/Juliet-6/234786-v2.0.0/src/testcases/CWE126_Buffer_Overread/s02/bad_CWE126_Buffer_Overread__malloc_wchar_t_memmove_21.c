static int VAR0 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
    {
        data = (wchar_t *)malloc(50*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
    }
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
    {
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1);
        dest[100-1] = L'\0'; 
<START>
        memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
<END>
        dest[100-1] = L'\0';
        printWLine(dest);
        free(data);
    }
}
