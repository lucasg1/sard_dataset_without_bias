void FUN0()
{
    while(1)
    {
<START>
        if (REMOVE("removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
        break;
    }
}
