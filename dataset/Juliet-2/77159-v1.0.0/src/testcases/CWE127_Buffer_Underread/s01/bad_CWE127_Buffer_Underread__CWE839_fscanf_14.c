void FUN0()
{
    int data;
    data = -1;
    if(globalFive==5)
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalFive==5)
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
