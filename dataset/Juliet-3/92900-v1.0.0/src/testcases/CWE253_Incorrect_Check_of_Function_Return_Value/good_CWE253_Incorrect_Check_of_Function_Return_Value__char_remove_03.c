void FUN0()
{
    if(5!=5)
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
    if(5==5)
    {
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
