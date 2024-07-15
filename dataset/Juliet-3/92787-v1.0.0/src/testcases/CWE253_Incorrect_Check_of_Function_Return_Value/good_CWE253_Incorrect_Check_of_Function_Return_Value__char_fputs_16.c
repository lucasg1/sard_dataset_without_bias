void FUN0()
{
    while(1)
    {
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
        break;
    }
}
