void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (fprintf(stdout, "%s\n", "string") == 0)
<END>
        {
            printLine("fprintf failed!");
        }
    }
}
