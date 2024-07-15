namespace NAMESPACE0
{
extern int VAR1;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR1)
    {
        data = new wchar_t[10];
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
        wchar_t source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
        printWLine(data);
        delete [] data;
    }
    ;
}
} 
