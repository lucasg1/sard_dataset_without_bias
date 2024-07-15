void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (putchar((int)'A') == EOF)
        {
            printLine("putchar failed!");
        }
    }
}
