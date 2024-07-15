void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalReturnsTrue())
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
