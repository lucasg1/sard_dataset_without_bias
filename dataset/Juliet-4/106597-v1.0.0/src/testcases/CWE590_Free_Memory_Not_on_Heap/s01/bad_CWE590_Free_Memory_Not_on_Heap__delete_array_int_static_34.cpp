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
        static int dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        printIntLine(data[0]);
<START>
        delete [] data;
<END>
    }
}
} 
