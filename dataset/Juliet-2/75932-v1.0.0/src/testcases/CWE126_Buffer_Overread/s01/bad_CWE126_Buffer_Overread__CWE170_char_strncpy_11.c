void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            char data[150], dest[100];
            memset(data, 'A', 149);
            data[149] = '\0';
            strncpy(dest, data, 99);
<START>
            printLine(dest);
<END>
        }
    }
}
