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
    {
        wchar_t dataBuffer;
        dataBuffer = L'A';
        data = &dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        printWcharLine(*data);
<START>
        delete data;
<END>
    }
}
} 
