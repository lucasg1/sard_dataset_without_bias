static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(FUN0())
    {
        data = new wchar_t[10];
    }
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        wcsncpy(data, source, wcslen(source) + 1);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 
