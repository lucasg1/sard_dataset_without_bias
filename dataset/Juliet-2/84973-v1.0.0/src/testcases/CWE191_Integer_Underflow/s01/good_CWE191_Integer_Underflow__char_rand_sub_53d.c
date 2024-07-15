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
    data = (char)RAND32();
    FUN3(data);
}
void FUN4(char data)
{
    {
        char result = data - 1;
        printHexCharLine(result);
    }
}
void FUN6(char data)
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
