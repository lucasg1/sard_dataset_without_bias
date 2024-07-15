static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
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
