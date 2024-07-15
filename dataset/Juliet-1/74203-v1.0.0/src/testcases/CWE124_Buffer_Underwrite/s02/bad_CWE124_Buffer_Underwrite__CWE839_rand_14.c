void FUN0()
{
    int data;
    data = -1;
    if(globalFive==5)
    {
        data = RAND32();
    }
    if(globalFive==5)
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
