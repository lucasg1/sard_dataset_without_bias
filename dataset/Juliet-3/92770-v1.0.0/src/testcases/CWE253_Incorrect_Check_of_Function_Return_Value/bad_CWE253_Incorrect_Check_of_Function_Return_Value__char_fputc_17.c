void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (fputc((int)'A', stdout) == 0)
<END>
        {
            printLine("fputc failed!");
        }
    }
}
