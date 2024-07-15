static wchar_t * VAR0;
static wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
<START>
    wcscpy(data, L"Initialize");
<END>
    printWLine(data);
    free(data);
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
    VAR0 = data;
    FUN0();
}
