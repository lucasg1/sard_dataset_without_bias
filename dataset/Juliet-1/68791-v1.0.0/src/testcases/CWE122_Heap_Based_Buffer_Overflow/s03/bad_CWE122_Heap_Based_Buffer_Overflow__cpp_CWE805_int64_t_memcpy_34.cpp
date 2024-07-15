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
    data = new int64_t[50];
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        {
            int64_t source[100] = {0}; 
<START>
            memcpy(data, source, 100*sizeof(int64_t));
<END>
            printLongLongLine(data[0]);
            delete [] data;
        }
    }
}
} 
