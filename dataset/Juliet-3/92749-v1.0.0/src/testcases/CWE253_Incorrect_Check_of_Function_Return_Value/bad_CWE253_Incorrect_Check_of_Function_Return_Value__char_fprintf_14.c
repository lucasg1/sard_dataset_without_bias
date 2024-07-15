void FUN0()
{
    if(globalFive==5)
    {
<START>
        if (fprintf(stdout, "%s\n", "string") == 0)
<END>
        {
            printLine("fprintf failed!");
        }
    }
}
