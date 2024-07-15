void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char data[150], dest[100];
            memset(data, 'A', 149);
            data[149] = '\0';
            memcpy(dest, data, 99*sizeof(char));
            dest[99] = '\0'; 
            printLine(dest);
        }
    }
}
void FUN1()
{
    if(globalTrue)
    {
        {
            char data[150], dest[100];
            memset(data, 'A', 149);
            data[149] = '\0';
            memcpy(dest, data, 99*sizeof(char));
            dest[99] = '\0'; 
            printLine(dest);
        }
    }
}
