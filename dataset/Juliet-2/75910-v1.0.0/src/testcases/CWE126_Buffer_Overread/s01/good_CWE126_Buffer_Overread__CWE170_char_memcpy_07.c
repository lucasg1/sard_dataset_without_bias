static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
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
    if(staticFive==5)
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
