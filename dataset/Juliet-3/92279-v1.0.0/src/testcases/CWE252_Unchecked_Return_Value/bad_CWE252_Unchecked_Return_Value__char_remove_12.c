void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        REMOVE("removemebad.txt");
<END>
    }
    else
    {
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
