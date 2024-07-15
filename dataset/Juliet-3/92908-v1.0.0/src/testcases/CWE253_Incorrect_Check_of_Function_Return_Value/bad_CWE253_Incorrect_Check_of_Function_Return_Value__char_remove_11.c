void FUN0()
{
    if(globalReturnsTrue())
    {
<START>
        if (REMOVE("removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
    }
}
