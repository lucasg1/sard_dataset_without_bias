namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t[10];
    return data;
}
} 
namespace NAMESPACE0
{
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        wcscpy(data, source);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
