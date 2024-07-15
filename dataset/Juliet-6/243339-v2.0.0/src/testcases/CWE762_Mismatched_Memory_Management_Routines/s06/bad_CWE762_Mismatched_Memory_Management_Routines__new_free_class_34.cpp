namespace NAMESPACE0
{
typedef union
{
    TwoIntsClass * unionFirst;
    TwoIntsClass * unionSecond;
} unionType;
void FUN0()
{
    TwoIntsClass * data;
    unionType myUnion;
    data = NULL;
    data = new TwoIntsClass;
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
<START>
        free(data);
<END>
    }
}
} 
