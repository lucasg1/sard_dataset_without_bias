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
    data = new int[50];
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[100] = {0}; 
<START>
            memmove(data, source, 100*sizeof(int));
<END>
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
} 
