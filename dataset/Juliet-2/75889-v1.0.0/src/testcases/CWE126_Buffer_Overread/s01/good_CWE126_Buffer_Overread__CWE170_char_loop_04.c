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
    if(STATIC_CONST_TRUE)
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
