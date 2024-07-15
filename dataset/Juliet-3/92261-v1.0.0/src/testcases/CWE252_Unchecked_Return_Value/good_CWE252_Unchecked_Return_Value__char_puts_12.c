void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        if (PUTS("string") == EOF)
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
