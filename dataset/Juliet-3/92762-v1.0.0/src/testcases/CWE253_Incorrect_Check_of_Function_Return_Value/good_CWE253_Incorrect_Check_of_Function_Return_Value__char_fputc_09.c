void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
    {
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
    }
}
