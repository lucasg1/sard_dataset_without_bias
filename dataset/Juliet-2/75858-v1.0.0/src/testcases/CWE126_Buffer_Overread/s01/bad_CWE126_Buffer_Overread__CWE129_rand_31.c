void FUN0()
{
    int data;
    data = -1;
    data = RAND32();
    {
        int dataCopy = data;
        int data = dataCopy;
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
