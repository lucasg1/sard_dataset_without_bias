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
void FUN5(char data)
{
    FUN1(data);
}
void FUN3(char data);
void FUN7(char data)
{
    FUN3(data);
}
void FUN8(char data);
void FUN0(char data)
{
    FUN8(data);
}
void FUN10(char data);
void FUN2(char data)
{
    FUN10(data);
}
void FUN5(char data);
void FUN13()
{
    char data;
    data = ' ';
    data = -2;
    FUN5(data);
}
void FUN7(char data);
void FUN15()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN7(data);
}
void FUN8(char data)
{
    {
        data--;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN10(char data)
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
