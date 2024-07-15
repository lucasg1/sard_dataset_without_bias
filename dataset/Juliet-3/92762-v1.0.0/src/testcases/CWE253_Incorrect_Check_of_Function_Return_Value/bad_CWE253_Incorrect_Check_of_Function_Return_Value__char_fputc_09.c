void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
<START>
        if (fputc((int)'A', stdout) == 0)
<END>
        {
            printLine("fputc failed!");
        }
    }
}
