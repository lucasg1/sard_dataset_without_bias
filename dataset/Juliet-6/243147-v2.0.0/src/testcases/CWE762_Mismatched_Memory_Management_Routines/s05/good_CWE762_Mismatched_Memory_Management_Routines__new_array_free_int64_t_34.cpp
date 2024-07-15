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
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        free(data);
    }
}
void FUN1()
{
    int64_t * data;
    unionType myUnion;
    data = NULL;
    data = new int64_t[100];
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        delete [] data;
    }
}
} 
