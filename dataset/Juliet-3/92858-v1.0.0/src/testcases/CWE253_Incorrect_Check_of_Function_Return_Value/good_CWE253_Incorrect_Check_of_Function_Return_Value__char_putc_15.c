void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
