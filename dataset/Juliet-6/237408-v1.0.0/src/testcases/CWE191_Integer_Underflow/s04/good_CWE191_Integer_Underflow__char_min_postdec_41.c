void FUN0(char data)
{
    {
        data--;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = -2;
    FUN0(data);
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
void FUN3()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN2(data);
}
