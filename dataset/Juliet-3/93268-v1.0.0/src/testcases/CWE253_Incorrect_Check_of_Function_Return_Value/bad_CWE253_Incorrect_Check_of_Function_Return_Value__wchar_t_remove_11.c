void FUN0()
{
    if(globalReturnsTrue())
    {
<START>
        if (REMOVE(L"removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
    }
}
