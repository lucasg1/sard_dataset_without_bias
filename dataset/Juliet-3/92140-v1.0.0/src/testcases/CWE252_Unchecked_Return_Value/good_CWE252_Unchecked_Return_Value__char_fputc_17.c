void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
    }
}
