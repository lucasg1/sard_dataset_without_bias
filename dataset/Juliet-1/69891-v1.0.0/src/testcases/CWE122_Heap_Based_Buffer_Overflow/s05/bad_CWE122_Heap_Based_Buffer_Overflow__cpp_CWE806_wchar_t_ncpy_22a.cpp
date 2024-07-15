namespace NAMESPACE0
{
extern int VAR1;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = new wchar_t[100];
    VAR1 = 1; 
    data = FUN0(data);
    {
        wchar_t dest[50] = L"";
<START>
        wcsncpy(dest, data, wcslen(data));
<END>
        dest[50-1] = L'\0'; 
        printWLine(data);
        delete [] data;
    }
    ;
}
} 
