void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (fprintf(stdout, "%s\n", "string") < 0)
        {
            printLine("fprintf failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
