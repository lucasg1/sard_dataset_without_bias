namespace NAMESPACE0
{
typedef union
{
    TwoIntsClass * unionFirst;
    TwoIntsClass * unionSecond;
} unionType;
void FUN0()
{
    TwoIntsClass * data;
    unionType myUnion;
    data = NULL;
    data = new TwoIntsClass;
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    unionType myUnion;
    data = NULL;
    data = (TwoIntsClass *)calloc(100, sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
        free(data);
    }
}
} 
