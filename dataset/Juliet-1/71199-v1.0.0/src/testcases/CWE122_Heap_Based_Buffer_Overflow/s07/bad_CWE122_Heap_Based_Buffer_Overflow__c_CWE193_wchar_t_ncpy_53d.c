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
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    FUN1(data);
}
void FUN4(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN4(data);
}
void FUN4(wchar_t * data)
{
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        wcsncpy(data, source, wcslen(source) + 1);
<END>
        printWLine(data);
        free(data);
    }
}
