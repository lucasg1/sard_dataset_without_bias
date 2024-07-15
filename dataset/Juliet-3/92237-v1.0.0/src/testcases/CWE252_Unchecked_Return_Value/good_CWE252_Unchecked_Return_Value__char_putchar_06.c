static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
    }
}
