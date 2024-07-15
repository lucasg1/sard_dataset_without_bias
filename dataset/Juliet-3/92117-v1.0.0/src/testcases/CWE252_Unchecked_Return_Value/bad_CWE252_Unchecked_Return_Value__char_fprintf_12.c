void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        fprintf(stdout, "%s\n", "string");
<END>
    }
    else
    {
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
    }
}
