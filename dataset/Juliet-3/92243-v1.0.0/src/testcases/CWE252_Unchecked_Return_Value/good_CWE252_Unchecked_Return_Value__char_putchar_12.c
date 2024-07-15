void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        if (putchar((int)'A') == EOF)
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
