void FUN0()
{
    while(1)
    {
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
        break;
    }
}
