void FUN0()
{
    char data;
    data = ' ';
    data = -2;
    {
        --data;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    if (data > CHAR_MIN)
    {
        --data;
        char result = data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
