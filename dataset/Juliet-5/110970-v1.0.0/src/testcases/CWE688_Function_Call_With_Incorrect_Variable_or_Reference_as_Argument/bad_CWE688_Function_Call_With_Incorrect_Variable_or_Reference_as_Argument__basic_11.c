void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            char dest[DEST_SIZE];
            int intFive = 5;
<START>
            sprintf(dest, "%s", intFive);
<END>
            printLine(dest);
        }
    }
}
