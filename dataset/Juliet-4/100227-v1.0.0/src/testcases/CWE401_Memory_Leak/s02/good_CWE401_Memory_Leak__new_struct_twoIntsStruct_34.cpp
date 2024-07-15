namespace NAMESPACE0
{
typedef union
{
    struct _twoIntsStruct * unionFirst;
    struct _twoIntsStruct * unionSecond;
} unionType;
void FUN0()
{
    struct _twoIntsStruct * data;
    unionType myUnion;
    data = NULL;
    struct _twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    myUnion.unionFirst = data;
    {
        struct _twoIntsStruct * data = myUnion.unionSecond;
        ; 
    }
}
void FUN1()
{
    struct _twoIntsStruct * data;
    unionType myUnion;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    myUnion.unionFirst = data;
    {
        struct _twoIntsStruct * data = myUnion.unionSecond;
        delete data;
    }
}
} 
