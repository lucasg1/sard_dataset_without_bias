void FUN0()
{
    goto sink;
sink:
    {
        char dest[DEST_SIZE];
        int intFive = 5;
        sprintf(dest, "%d", intFive);
        printLine(dest);
    }
}
