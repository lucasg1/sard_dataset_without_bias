void FUN0(char data)
{
    {
        char result = data - 1;
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
        char result = data - 1;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
void FUN3()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN2(data);
}
