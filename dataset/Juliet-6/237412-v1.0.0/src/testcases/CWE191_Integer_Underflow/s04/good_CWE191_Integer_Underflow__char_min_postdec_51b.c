void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = -2;
    FUN0(data);
}
void FUN2(char data);
void FUN3()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN2(data);
}
void FUN0(char data)
{
    {
        data--;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN2(char data)
{
    if (data > CHAR_MIN)
    {
        data--;
        char result = data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
