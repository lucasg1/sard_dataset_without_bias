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
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
<START>
        delete data;
<END>
    }
}
} 
