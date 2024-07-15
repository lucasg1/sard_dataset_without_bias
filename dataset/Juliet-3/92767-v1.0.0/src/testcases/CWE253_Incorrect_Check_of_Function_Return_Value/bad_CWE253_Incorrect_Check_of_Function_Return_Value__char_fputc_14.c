void FUN0()
{
    if(globalFive==5)
    {
<START>
        if (fputc((int)'A', stdout) == 0)
<END>
        {
            printLine("fputc failed!");
        }
    }
}
