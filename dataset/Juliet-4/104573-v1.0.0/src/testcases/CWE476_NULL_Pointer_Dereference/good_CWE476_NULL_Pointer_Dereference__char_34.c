typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE476_NULL_Pointer_Dereference__char_34_unionType;
void FUN0()
{
    char * data;
    CWE476_NULL_Pointer_Dereference__char_34_unionType myUnion;
    data = "Good";
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        printHexCharLine(data[0]);
    }
}
void FUN1()
{
    char * data;
    CWE476_NULL_Pointer_Dereference__char_34_unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        if (data != NULL)
        {
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
