void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (fputc((int)'A', stdout) == EOF)
        {
            printLine("fputc failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
