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
    data = new wchar_t[100];
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
<START>
        delete data;
<END>
    }
}
} 
