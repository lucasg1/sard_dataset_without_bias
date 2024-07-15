void FUN0()
{
    while(1)
    {
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
        break;
    }
}
