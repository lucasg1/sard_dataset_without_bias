void FUN0()
{
    goto sink;
sink:
    {
        char dest[DEST_SIZE];
        int intFive = 5;
<START>
        sprintf(dest, "%s", intFive);
<END>
        printLine(dest);
    }
}
