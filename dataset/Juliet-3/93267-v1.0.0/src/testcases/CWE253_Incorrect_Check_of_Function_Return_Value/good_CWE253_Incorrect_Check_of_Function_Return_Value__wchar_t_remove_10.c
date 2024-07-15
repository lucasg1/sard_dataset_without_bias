void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (REMOVE(L"removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
void FUN1()
{
    if(globalTrue)
    {
        if (REMOVE(L"removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
