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
    int64_t VAR1;
    data = &VAR1;
    *data = 5LL;
    printLongLongLine(*data);
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        ; 
    }
}
void FUN1()
{
    int64_t * data;
    unionType myUnion;
    data = NULL;
    data = new int64_t;
    *data = 5LL;
    printLongLongLine(*data);
    myUnion.unionFirst = data;
    {
        int64_t * data = myUnion.unionSecond;
        delete data;
    }
}
} 
