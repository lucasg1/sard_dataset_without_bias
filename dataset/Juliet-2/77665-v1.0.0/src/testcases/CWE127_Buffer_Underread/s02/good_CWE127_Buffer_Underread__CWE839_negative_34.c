typedef union
{
    int unionFirst;
    int unionSecond;
} CWE127_Buffer_Underread__CWE839_negative_34_unionType;
void FUN0()
{
    int data;
    CWE127_Buffer_Underread__CWE839_negative_34_unionType myUnion;
    data = -1;
    data = 7;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int buffer[10] = { 0 };
            if (data < 10)
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
}
void FUN1()
{
    int data;
    CWE127_Buffer_Underread__CWE839_negative_34_unionType myUnion;
    data = -1;
    data = -5;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                printIntLine(buffer[data]);
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
