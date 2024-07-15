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
    data = new long;
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        delete data;
    }
}
void FUN1()
{
    long * data;
    unionType myUnion;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        free(data);
    }
}
} 
