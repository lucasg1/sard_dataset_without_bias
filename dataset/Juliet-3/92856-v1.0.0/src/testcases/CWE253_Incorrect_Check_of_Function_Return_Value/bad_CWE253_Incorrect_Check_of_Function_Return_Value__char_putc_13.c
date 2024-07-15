void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        if (putc((int)'A', stdout) == 0)
<END>
        {
            printLine("putc failed!");
        }
    }
}
