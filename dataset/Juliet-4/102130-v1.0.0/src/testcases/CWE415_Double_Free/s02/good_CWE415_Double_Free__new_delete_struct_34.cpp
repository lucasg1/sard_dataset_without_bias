namespace NAMESPACE0
{
typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} unionType;
void FUN0()
{
    twoIntsStruct * data;
    unionType myUnion;
    data = NULL;
    data = new twoIntsStruct;
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        delete data;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    unionType myUnion;
    data = NULL;
    data = new twoIntsStruct;
    delete data;
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        ; 
    }
}
} 
