void FUN0()
{
    if(5==5)
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
