void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (REMOVE(L"removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
    }
    else
    {
        if (REMOVE(L"removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
