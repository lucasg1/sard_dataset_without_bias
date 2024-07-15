typedef union
{
    int unionFirst;
    int unionSecond;
} CWE127_Buffer_Underread__CWE839_fscanf_34_unionType;
void FUN0()
{
    int data;
    CWE127_Buffer_Underread__CWE839_fscanf_34_unionType myUnion;
    data = -1;
    fscanf(stdin, "%d", &data);
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
        {
            int buffer[10] = { 0 };
            if (data < 10)
            {
<START>
                printIntLine(buffer[data]);
<END>
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
}
