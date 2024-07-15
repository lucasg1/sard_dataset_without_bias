void FUN0()
{
    if(globalFive==5)
    {
<START>
        if (putc((int)'A', stdout) == 0)
<END>
        {
            printLine("putc failed!");
        }
    }
}
