void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        if (REMOVE("removemegood.txt") != 0)
        {
            printLine("remove failed!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
