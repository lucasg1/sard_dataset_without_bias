static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
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
    if(staticTrue)
    {
        {
            char dest[DEST_SIZE];
            int intFive = 5;
            sprintf(dest, "%d", intFive);
            printLine(dest);
        }
    }
}
