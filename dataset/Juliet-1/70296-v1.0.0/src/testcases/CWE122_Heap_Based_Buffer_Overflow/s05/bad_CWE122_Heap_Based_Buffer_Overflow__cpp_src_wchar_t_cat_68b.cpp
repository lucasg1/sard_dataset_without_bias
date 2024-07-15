wchar_t * VAR0;
wchar_t * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    wchar_t * data;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    VAR0 = data;
    FUN0();
}
} 
extern wchar_t * VAR0;
extern wchar_t * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    wchar_t * data = VAR0;
    {
        wchar_t dest[50] = L"";
<START>
        wcscat(dest, data);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
