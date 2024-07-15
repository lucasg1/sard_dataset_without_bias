namespace NAMESPACE0
{
wchar_t * VAR1;
wchar_t * VAR2;
wchar_t * VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    wchar_t * data;
    data = NULL;
    wchar_t VAR4;
    data = &VAR4;
    *data = L'A';
    printHexCharLine((char)*data);
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t;
    *data = L'A';
    printHexCharLine((char)*data);
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern wchar_t * VAR1;
extern wchar_t * VAR2;
extern wchar_t * VAR3;
void FUN0()
{
    wchar_t * data = VAR2;
    ; 
}
void FUN1()
{
    wchar_t * data = VAR3;
    delete data;
}
} 
