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
        int64_t * dataBuffer = new int64_t;
        *dataBuffer = 5LL;
        data = dataBuffer;
    }
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        printLongLongLine(*data);
        delete data;
    }
}
} 
