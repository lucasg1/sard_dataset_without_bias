void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        putc((int)'A', stdout);
<END>
    }
    else
    {
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}
