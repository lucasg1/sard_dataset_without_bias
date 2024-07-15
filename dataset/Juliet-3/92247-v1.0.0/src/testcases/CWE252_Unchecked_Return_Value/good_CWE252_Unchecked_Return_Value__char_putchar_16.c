void FUN0()
{
    while(1)
    {
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
        break;
    }
}
