void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        putchar((int)'A');
<END>
    }
    else
    {
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
    }
}
