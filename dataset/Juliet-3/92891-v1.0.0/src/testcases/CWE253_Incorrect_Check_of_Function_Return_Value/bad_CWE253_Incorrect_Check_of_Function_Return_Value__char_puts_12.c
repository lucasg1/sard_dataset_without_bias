void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (PUTS("string") == 0)
<END>
        {
            printLine("puts failed!");
        }
    }
    else
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
