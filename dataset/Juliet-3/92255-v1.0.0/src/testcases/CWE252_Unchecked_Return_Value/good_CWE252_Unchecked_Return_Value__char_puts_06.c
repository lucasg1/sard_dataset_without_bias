static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
