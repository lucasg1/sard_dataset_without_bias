static wchar_t * VAR0;
static wchar_t * VAR1;
static wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR0;
<START>
<END>
    ; 
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    VAR0 = data;
    FUN0();
}
