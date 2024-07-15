void FUN0()
{
    int data;
    data = -1;
    if(1)
    {
        data = -5;
    }
    if(1)
    {
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
