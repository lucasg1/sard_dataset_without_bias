static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        {
            char dest[DEST_SIZE];
            int intFive = 5;
            sprintf(dest, "%d", intFive);
            printLine(dest);
        }
    }
}
