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
    {
        int * dataBuffer = (int *)ALLOCA(sizeof(int));
        *dataBuffer = 5;
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        printIntLine(*data);
<START>
        delete data;
<END>
    }
}
} 
