void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (REMOVE("removemebad.txt") == 0)
<END>
        {
            printLine("remove failed!");
        }
    }
}
