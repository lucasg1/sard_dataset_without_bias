void FUN0(char data);
void FUN1(char data)
{
    FUN0(data);
}
void FUN2(char data);
void FUN3(char data)
{
    FUN2(data);
}
void FUN1(char data);
void FUN5()
{
    char data;
    data = ' ';
    data = -2;
    FUN1(data);
}
void FUN3(char data);
void FUN7()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN3(data);
}
void FUN0(char data)
{
    {
        char result = data - 1;
        printHexCharLine(result);
    }
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
