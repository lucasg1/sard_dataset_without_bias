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
    {
        long dataBuffer;
        dataBuffer = 5L;
        data = &dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        printLongLine(*data);
<START>
        delete data;
<END>
    }
}
} 
