void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    data[0] = L'\0'; 
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN3(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN3(data);
}
void FUN5(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN5(data);
}
void FUN2(wchar_t * data)
{
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncat(data, source, 100);
<END>
        printWLine(data);
        free(data);
    }
}
