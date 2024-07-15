typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE476_NULL_Pointer_Dereference__int_34_unionType;
void FUN0()
{
    int * data;
    int tmpData = 5;
    CWE476_NULL_Pointer_Dereference__int_34_unionType myUnion;
    {
        data = &tmpData;
    }
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        printIntLine(*data);
    }
}
void FUN1()
{
    int * data;
    CWE476_NULL_Pointer_Dereference__int_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        if (data != NULL)
        {
            printIntLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
