namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t[10+1];
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printWLine(data);
        delete [] data;
    }
}
} 
