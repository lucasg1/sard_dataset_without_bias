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
    data = new TwoIntsClass[100];
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
        delete [] data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    unionType myUnion;
    data = NULL;
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
        free(data);
    }
}
} 
