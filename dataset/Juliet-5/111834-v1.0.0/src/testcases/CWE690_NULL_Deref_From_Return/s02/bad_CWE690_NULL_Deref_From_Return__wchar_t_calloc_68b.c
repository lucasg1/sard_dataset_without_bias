wchar_t * VAR0;
wchar_t * VAR1;
void FUN0();
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)calloc(20, sizeof(wchar_t));
    VAR0 = data;
    FUN0();
}
extern wchar_t * VAR0;
extern wchar_t * VAR1;
void FUN0()
{
    wchar_t * data = VAR0;
<START>
    wcscpy(data, L"Initialize");
<END>
    printWLine(data);
    free(data);
}
