static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
