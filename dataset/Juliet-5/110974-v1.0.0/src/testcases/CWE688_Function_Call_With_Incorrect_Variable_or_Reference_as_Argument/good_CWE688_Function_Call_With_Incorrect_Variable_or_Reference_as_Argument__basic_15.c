void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char dest[DEST_SIZE];
        int intFive = 5;
        sprintf(dest, "%d", intFive);
        printLine(dest);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char dest[DEST_SIZE];
        int intFive = 5;
        sprintf(dest, "%d", intFive);
        printLine(dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
