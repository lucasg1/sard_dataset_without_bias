void FUN0()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_TRUE)
    {
        data = -5;
    }
    if(GLOBAL_CONST_TRUE)
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
