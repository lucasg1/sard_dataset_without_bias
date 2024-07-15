void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (PUTS("string") == 0)
<END>
        {
            printLine("puts failed!");
        }
    }
}
