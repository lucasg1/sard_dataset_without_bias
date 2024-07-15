namespace NAMESPACE0
{
void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[10];
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * data)
{
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
