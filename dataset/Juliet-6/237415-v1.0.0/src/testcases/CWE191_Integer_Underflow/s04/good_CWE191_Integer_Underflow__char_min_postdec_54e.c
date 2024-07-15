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
void FUN4(char data);
void FUN0(char data)
{
    FUN4(data);
}
void FUN6(char data);
void FUN2(char data)
{
    FUN6(data);
}
void FUN1(char data);
void FUN9()
{
    char data;
    data = ' ';
    data = -2;
    FUN1(data);
}
void FUN3(char data);
void FUN11()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN3(data);
}
void FUN13(char data);
void FUN4(char data)
{
    FUN13(data);
}
void FUN15(char data);
void FUN6(char data)
{
    FUN15(data);
}
void FUN13(char data)
{
    {
        data--;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN15(char data)
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
