typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE476_NULL_Pointer_Dereference__wchar_t_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE476_NULL_Pointer_Dereference__wchar_t_34_unionType myUnion;
    data = L"Good";
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        printWcharLine(data[0]);
    }
}
void FUN1()
{
    wchar_t * data;
    CWE476_NULL_Pointer_Dereference__wchar_t_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        if (data != NULL)
        {
            printWcharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
