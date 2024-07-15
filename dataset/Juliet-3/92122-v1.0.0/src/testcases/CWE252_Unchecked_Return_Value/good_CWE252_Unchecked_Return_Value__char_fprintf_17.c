void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
    }
}
