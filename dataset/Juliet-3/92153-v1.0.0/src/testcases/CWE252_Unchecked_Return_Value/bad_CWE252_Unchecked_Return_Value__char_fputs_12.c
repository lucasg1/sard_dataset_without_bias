void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        fputs("string", stdout);
<END>
    }
    else
    {
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
    }
}
