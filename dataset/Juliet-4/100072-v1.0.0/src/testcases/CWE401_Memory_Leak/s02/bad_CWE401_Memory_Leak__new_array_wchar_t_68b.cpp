namespace NAMESPACE0
{
wchar_t * VAR1;
wchar_t * VAR2;
wchar_t * VAR3;
void FUN0();
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wcscpy(data, L"A String");
    printWLine(data);
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern wchar_t * VAR1;
extern wchar_t * VAR2;
extern wchar_t * VAR3;
void FUN0()
{
    wchar_t * data = VAR1;
<START>
<END>
    ; 
}
} 
