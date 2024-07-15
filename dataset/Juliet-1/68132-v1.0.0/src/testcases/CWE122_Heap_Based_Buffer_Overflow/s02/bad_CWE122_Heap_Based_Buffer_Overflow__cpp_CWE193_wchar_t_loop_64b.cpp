namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[10];
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printWLine(data);
        delete [] data;
    }
}
} 
