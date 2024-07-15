static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
<START>
            printLine(dest);
<END>
        }
    }
}
