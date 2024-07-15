void FUN0()
{
    while(1)
    {
<START>
        if (putc((int)'A', stdout) == 0)
<END>
        {
            printLine("putc failed!");
        }
        break;
    }
}
