static wchar_t * VAR0;
static wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
        printWLine(data);
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    VAR0 = data;
    FUN0();
}
