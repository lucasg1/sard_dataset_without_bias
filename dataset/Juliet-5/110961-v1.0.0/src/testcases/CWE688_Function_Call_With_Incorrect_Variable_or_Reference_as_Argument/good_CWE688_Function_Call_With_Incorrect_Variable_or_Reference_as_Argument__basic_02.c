void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char dest[DEST_SIZE];
            int intFive = 5;
            sprintf(dest, "%d", intFive);
            printLine(dest);
        }
    }
}
void FUN1()
{
    if(1)
    {
        {
            char dest[DEST_SIZE];
            int intFive = 5;
            sprintf(dest, "%d", intFive);
            printLine(dest);
        }
    }
}
