void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN1(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0'; 
    FUN1(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        SNPRINTF(data, 100, L"%s", source);
<END>
        printWLine(data);
        free(data);
    }
}
