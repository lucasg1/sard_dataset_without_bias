void FUN0()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char src[150], dest[100];
            int i;
            memset(src, 'A', 149);
            src[149] = '\0';
            for(i=0; i < 99; i++)
            {
                dest[i] = src[i];
            }
            dest[99] = '\0'; 
            printLine(dest);
        }
    }
}
void FUN1()
{
    if(globalReturnsTrue())
    {
        {
            char src[150], dest[100];
            int i;
            memset(src, 'A', 149);
            src[149] = '\0';
            for(i=0; i < 99; i++)
            {
                dest[i] = src[i];
            }
            dest[99] = '\0'; 
            printLine(dest);
        }
    }
}
