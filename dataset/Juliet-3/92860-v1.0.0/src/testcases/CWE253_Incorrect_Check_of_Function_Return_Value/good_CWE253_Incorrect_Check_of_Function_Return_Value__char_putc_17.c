void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}
