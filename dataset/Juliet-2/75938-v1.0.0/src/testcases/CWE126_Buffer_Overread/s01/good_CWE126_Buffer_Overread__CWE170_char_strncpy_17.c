void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            char data[150], dest[100];
            memset(data, 'A', 149);
            data[149] = '\0';
            strncpy(dest, data, 99);
            dest[99] = '\0'; 
            printLine(dest);
        }
    }
}
