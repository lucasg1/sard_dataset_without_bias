namespace NAMESPACE0
{
typedef union
{
    int64_t * unionFirst;
    int64_t * unionSecond;
} unionType;
void FUN0()
{
    int64_t * data;
    unionType myUnion;
    data = NULL; 
    {
        int64_t * dataBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        printLongLongLine(data[0]);
<START>
        delete [] data;
<END>
    }
}
} 
