typedef union
{
    twoIntsStruct * unionFirst;
    twoIntsStruct * unionSecond;
} CWE476_NULL_Pointer_Dereference__struct_34_unionType;
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    CWE476_NULL_Pointer_Dereference__struct_34_unionType myUnion;
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        printIntLine(data->intOne);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    CWE476_NULL_Pointer_Dereference__struct_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        twoIntsStruct * data = myUnion.unionSecond;
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
