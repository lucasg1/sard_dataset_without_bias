void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
    }
}
