void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
    {
        {
            char dest[DEST_SIZE];
            int intFive = 5;
            sprintf(dest, "%d", intFive);
            printLine(dest);
        }
    }
}
