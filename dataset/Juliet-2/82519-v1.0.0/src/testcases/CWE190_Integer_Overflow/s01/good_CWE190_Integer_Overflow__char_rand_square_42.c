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
    {
        char result = data * data;
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
    if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
    {
        char result = data * data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
