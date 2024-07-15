void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        REMOVE(L"removemebad.txt");
<END>
    }
    else
    {
        if (REMOVE(L"removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
