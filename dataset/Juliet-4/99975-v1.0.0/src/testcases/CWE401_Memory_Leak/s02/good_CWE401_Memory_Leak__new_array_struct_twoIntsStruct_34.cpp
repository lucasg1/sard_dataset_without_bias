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
    struct _twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
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
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    myUnion.unionFirst = data;
    {
        struct _twoIntsStruct * data = myUnion.unionSecond;
        delete[] data;
    }
}
} 
