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
