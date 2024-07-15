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
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
}
} 
