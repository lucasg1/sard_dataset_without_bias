static char FUN0(char data)
{
    data = 2;
    return data;
}
void FUN1()
{
    char data;
    data = ' ';
    data = FUN0(data);
    if(data > 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
static char FUN2(char data)
{
    data = (char)RAND32();
    return data;
}
void FUN3()
{
    char data;
    data = ' ';
    data = FUN2(data);
    if(data > 0) 
    {
        if (data < (CHAR_MAX/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
