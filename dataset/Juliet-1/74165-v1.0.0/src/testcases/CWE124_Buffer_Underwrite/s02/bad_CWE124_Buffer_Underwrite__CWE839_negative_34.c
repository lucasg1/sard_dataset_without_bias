typedef union
{
    int unionFirst;
    int unionSecond;
} CWE124_Buffer_Underwrite__CWE839_negative_34_unionType;
void FUN0()
{
    int data;
    CWE124_Buffer_Underwrite__CWE839_negative_34_unionType myUnion;
    data = -1;
    data = -5;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int i;
            int buffer[10] = { 0 };
            if (data < 10)
            {
<START>
                buffer[data] = 1;
<END>
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
