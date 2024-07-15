namespace NAMESPACE0
{
typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} unionType;
void FUN0()
{
    wchar_t * data;
    unionType myUnion;
    data = NULL;
    data = new wchar_t[10];
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t source[10+1] = SRC_STRING;
<START>
            memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
            printWLine(data);
            delete [] data;
        }
    }
}
} 
