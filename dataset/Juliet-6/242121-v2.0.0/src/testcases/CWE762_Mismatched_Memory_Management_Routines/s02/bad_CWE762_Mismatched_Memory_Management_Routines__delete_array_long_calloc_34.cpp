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
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
<START>
        delete [] data;
<END>
    }
}
} 
