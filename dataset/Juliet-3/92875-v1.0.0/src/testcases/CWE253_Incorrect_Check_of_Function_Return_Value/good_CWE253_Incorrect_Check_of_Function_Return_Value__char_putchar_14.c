void FUN0()
{
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
    }
}
