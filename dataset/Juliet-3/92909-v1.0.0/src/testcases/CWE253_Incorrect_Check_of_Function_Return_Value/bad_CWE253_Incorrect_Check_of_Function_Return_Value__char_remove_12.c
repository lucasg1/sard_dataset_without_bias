void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (REMOVE("removemebad.txt") == 0)
<END>
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
