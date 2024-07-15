void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
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
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
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
