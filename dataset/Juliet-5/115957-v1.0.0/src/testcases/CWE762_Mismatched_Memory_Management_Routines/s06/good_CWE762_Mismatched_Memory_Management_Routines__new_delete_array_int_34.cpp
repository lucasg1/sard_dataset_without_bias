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
    data = new int[100];
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        delete [] data;
    }
}
void FUN1()
{
    int * data;
    unionType myUnion;
    data = NULL;
    data = new int;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        delete data;
    }
}
} 
