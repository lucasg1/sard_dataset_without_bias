void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        if (fputc((int)'A', stdout) == 0)
<END>
        {
            printLine("fputc failed!");
        }
    }
    else
    {
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
    }
}
