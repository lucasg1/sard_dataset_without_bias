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
void FUN5()
{
    char data;
    data = ' ';
    data = 2;
    FUN4(data);
}
void FUN6(char data);
void FUN7()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN6(data);
}
void FUN1(char data);
void FUN4(char data)
{
    FUN1(data);
}
void FUN3(char data);
void FUN6(char data)
{
    FUN3(data);
}
void FUN13(char data);
void FUN0(char data)
{
    FUN13(data);
}
void FUN15(char data);
void FUN2(char data)
{
    FUN15(data);
}
void FUN13(char data)
{
    {
        char result = data + 1;
        printHexCharLine(result);
    }
}
void FUN15(char data)
{
    if (data < CHAR_MAX)
    {
        char result = data + 1;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
