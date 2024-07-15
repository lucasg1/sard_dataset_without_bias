namespace NAMESPACE0
{
static wchar_t * VAR1;
static wchar_t * VAR2;
static wchar_t * VAR3;
void FUN0()
{
    wchar_t * data = VAR2;
    ; 
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    wchar_t VAR4[100];
    data = VAR4;
    wcscpy(data, L"A String");
    printWLine(data);
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    wchar_t * data = VAR3;
    delete[] data;
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wcscpy(data, L"A String");
    printWLine(data);
    VAR3 = data;
    FUN2();
}
} 
