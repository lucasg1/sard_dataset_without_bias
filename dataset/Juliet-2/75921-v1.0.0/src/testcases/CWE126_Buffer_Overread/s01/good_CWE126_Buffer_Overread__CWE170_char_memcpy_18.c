void FUN0()
{
    goto sink;
sink:
    {
        char data[150], dest[100];
        memset(data, 'A', 149);
        data[149] = '\0';
        memcpy(dest, data, 99*sizeof(char));
        dest[99] = '\0'; 
        printLine(dest);
    }
}
