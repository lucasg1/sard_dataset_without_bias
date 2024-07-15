void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (putchar((int)'A') == 0)
<END>
        {
            printLine("putchar failed!");
        }
    }
    else
    {
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
    }
}
