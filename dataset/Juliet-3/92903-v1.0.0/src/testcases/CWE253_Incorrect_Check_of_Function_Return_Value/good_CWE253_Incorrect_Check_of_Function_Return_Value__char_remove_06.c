static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_FIVE==5)
    {
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
