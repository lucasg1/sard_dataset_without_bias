char FUN0(char data)
{
    data = 2;
    return data;
}
char FUN1(char data)
{
    data = (char)RAND32();
    return data;
}
char FUN0(char data);
void FUN3()
{
    char data;
    data = ' ';
    data = FUN0(data);
    {
        char result = data * data;
        printHexCharLine(result);
    }
}
char FUN1(char data);
void FUN5()
{
    char data;
    data = ' ';
    data = FUN1(data);
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
