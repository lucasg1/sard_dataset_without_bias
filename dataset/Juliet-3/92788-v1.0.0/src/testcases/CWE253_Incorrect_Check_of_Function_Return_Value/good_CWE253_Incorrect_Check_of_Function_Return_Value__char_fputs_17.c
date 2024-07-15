void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
    }
}
