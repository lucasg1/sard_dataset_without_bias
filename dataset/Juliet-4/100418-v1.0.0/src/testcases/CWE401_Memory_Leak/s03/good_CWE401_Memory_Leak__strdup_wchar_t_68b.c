wchar_t * VAR0;
wchar_t * VAR1;
wchar_t * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"a string");
    printWLine(data);
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    VAR2 = data;
    FUN1();
}
extern wchar_t * VAR0;
extern wchar_t * VAR1;
extern wchar_t * VAR2;
void FUN0()
{
    wchar_t * data = VAR1;
    ; 
}
void FUN1()
{
    wchar_t * data = VAR2;
    free(data);
}
