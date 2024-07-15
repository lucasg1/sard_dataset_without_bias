typedef union
{
    int unionFirst;
    int unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE129_large_34_unionType;
void FUN0()
{
    int data;
    CWE121_Stack_Based_Buffer_Overflow__CWE129_large_34_unionType myUnion;
    data = -1;
    data = 7;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int i;
            int buffer[10] = { 0 };
            if (data >= 0)
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is negative.");
            }
        }
    }
}
void FUN1()
{
    int data;
    CWE121_Stack_Based_Buffer_Overflow__CWE129_large_34_unionType myUnion;
    data = -1;
    data = 10;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int i;
            int buffer[10] = { 0 };
            if (data >= 0 && data < (10))
            {
                buffer[data] = 1;
                for(i = 0; i < 10; i++)
                {
                    printIntLine(buffer[i]);
                }
            }
            else
            {
                printLine("ERROR: Array index is out-of-bounds");
            }
        }
    }
}
