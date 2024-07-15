void FUN0()
{
    int i,j;
    int data;
    data = -1;
    for(i = 0; i < 1; i++)
    {
        data = -5;
    }
    for(j = 0; j < 1; j++)
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
