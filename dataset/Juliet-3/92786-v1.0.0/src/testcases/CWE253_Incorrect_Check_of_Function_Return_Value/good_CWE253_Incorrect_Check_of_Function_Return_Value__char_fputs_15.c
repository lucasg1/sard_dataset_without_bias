void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (fputs("string", stdout) == EOF)
        {
            printLine("fputs failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
