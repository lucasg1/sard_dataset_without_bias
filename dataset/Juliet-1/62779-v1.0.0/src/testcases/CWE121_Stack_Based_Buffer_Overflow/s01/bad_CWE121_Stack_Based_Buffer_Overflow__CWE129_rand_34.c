typedef union
{
    int unionFirst;
    int unionSecond;
} CWE121_Stack_Based_Buffer_Overflow__CWE129_rand_34_unionType;
void FUN0()
{
    int data;
    CWE121_Stack_Based_Buffer_Overflow__CWE129_rand_34_unionType myUnion;
    data = -1;
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int i;
            int buffer[10] = { 0 };
            if (data >= 0)
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
