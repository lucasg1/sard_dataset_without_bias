namespace NAMESPACE0
{
static wchar_t * VAR1;
static wchar_t * VAR2;
static wchar_t * VAR3;
void FUN0()
{
    wchar_t * data = VAR2;
    delete [] data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    wchar_t * data = VAR3;
    ; 
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    delete [] data;
    VAR3 = data;
    FUN2();
}
} 
