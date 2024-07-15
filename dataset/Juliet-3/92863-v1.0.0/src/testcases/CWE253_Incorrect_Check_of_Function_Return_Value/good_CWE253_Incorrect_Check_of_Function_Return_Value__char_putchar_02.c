void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
    }
}
void FUN1()
{
    if(1)
    {
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
    }
}
