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
    int VAR1;
    data = &VAR1;
    *data = 5;
    printIntLine(*data);
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        ; 
    }
}
void FUN1()
{
    int * data;
    unionType myUnion;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        delete data;
    }
}
} 
