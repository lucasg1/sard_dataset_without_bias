void FUN0()
{
    int data;
    data = -1;
    if(GLOBAL_CONST_TRUE)
    {
        data = 10;
    }
    if(GLOBAL_CONST_TRUE)
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
