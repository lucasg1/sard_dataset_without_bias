void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (putc((int)'A', stdout) == 0)
<END>
        {
            printLine("putc failed!");
        }
    }
}
