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
        static int dataBuffer;
        dataBuffer = 5;
        data = &dataBuffer;
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
