void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char data[150], dest[100];
        memset(data, 'A', 149);
        data[149] = '\0';
        strncpy(dest, data, 99);
        dest[99] = '\0'; 
        printLine(dest);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        char data[150], dest[100];
        memset(data, 'A', 149);
        data[149] = '\0';
        strncpy(dest, data, 99);
        dest[99] = '\0'; 
        printLine(dest);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
