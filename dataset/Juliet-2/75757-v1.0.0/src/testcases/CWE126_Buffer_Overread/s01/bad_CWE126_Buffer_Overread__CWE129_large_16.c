void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        data = 10;
        break;
    }
    while(1)
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
        break;
    }
}