void FUN0(char data)
{
    if(data > 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = 2;
    FUN0(data);
}
void FUN2(char data)
{
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
void FUN3()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN2(data);
}
