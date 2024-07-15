namespace NAMESPACE0
{
extern int VAR1;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        data = new wchar_t[50];
        data[0] = L'\0'; 
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
    data = NULL;
    VAR1 = 1; 
    data = FUN0(data);
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcscat(data, source);
<END>
        printWLine(data);
        delete [] data;
    }
    ;
}
} 
