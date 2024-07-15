namespace NAMESPACE0
{
typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} unionType;
void FUN0()
{
    twoIntsStruct * data;
    unionType myUnion;
    data = NULL;
    data = new twoIntsStruct[100];
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
<START>
        free(data);
<END>
    }
}
} 
