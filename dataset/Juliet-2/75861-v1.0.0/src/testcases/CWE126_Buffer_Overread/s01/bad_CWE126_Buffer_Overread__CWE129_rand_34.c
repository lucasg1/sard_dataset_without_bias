typedef union
{
    int unionFirst;
    int unionSecond;
} CWE126_Buffer_Overread__CWE129_rand_34_unionType;
void FUN0()
{
    int data;
    CWE126_Buffer_Overread__CWE129_rand_34_unionType myUnion;
    data = -1;
    data = RAND32();
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int buffer[10] = { 0 };
            if (data >= 0)
            {
<START>
                printIntLine(buffer[data]);
<END>
            }
            else
            {
                printLine("ERROR: Array index is negative");
            }
        }
    }
}
