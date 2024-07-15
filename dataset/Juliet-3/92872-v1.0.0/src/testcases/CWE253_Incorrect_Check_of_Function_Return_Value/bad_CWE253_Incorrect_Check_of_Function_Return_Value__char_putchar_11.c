void FUN0()
{
    if(globalReturnsTrue())
    {
<START>
        if (putchar((int)'A') == 0)
<END>
        {
            printLine("putchar failed!");
        }
    }
}
