void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
    else
    {
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
