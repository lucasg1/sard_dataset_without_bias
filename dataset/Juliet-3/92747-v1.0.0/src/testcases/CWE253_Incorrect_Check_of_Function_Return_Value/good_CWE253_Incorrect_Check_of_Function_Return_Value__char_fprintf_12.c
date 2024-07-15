void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
    }
    else
    {
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
    }
}
