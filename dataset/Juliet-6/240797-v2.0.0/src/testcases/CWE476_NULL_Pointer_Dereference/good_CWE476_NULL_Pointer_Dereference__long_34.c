typedef union
{
    long * unionFirst;
    long * unionSecond;
} CWE476_NULL_Pointer_Dereference__long_34_unionType;
void FUN0()
{
    long * data;
    long tmpData = 5L;
    CWE476_NULL_Pointer_Dereference__long_34_unionType myUnion;
    {
        data = &tmpData;
    }
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        printLongLine(*data);
    }
}
void FUN1()
{
    long * data;
    CWE476_NULL_Pointer_Dereference__long_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        long * data = myUnion.unionSecond;
        if (data != NULL)
        {
            printLongLine(*data);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
