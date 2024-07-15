static wchar_t * VAR0;
static wchar_t * VAR1;
static wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR1;
    ; 
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    wchar_t * data = VAR2;
    free(data);
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    VAR2 = data;
    FUN2();
}
