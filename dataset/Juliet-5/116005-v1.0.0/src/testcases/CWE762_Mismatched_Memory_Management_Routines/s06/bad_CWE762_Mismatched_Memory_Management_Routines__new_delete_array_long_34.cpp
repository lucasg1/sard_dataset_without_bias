namespace NAMESPACE0
{
typedef union
{
    long * unionFirst;
    long * unionSecond;
} unionType;
void FUN0()
{
    long * data;
    unionType myUnion;
    data = NULL;
    data = new long;
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
<START>
        delete [] data;
<END>
    }
}
} 
