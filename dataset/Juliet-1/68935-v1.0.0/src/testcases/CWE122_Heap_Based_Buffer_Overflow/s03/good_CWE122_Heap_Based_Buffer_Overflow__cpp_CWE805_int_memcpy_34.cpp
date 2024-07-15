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
    data = new int[100];
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[100] = {0}; 
            memcpy(data, source, 100*sizeof(int));
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
} 
