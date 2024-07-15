void FUN0()
{
    while(1)
    {
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
        break;
    }
}
