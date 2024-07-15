namespace NAMESPACE0
{
typedef union
{
    int * unionFirst;
    int * unionSecond;
} unionType;
void FUN0()
{
    int * data;
    unionType myUnion;
    data = NULL;
    data = new int;
    delete data;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
<START>
        delete data;
<END>
    }
}
} 
