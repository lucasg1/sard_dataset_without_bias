void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        if (fprintf(stdout, "%s\n", "string") == 0)
<END>
        {
            printLine("fprintf failed!");
        }
    }
}
