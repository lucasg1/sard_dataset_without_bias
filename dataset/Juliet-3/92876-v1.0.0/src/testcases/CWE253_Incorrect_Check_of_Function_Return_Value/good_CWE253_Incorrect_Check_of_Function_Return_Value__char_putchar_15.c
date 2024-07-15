void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
