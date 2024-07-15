void FUN0()
{
    int data;
    data = -1;
    if(5==5)
    {
        data = 10;
    }
    if(5==5)
    {
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
