void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
