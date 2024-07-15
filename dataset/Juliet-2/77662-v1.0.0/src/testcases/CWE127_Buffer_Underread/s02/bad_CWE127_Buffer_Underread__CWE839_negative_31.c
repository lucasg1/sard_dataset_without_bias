void FUN0()
{
    int data;
    data = -1;
    data = -5;
    {
        int dataCopy = data;
        int data = dataCopy;
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
