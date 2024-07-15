void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        fputc((int)'A', stdout);
<END>
    }
    else
    {
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
    }
}
