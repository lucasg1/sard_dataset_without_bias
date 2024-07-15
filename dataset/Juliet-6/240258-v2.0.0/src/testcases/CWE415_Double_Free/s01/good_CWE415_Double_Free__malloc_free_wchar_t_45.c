static wchar_t * VAR0;
static wchar_t * VAR1;
static wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR1;
    free(data);
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    wchar_t * data = VAR2;
    ; 
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR2 = data;
    FUN2();
}
