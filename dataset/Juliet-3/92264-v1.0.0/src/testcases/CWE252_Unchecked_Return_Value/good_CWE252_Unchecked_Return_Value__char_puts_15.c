void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (PUTS("string") == EOF)
        {
            printLine("puts failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
