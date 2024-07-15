void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (fprintf(stdout, "%s\n", "string") == 0)
<END>
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
