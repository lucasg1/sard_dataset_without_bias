static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
