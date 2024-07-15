void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        PUTS("string");
<END>
    }
    else
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
    }
}
