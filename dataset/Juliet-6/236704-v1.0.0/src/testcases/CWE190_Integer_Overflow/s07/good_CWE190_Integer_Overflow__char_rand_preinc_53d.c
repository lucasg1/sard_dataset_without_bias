void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = 2;
    FUN0(data);
}
void FUN2(char data);
void FUN3()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN2(data);
}
void FUN5(char data);
void FUN0(char data)
{
    FUN5(data);
}
void FUN7(char data);
void FUN2(char data)
{
    FUN7(data);
}
void FUN9(char data);
void FUN5(char data)
{
    FUN9(data);
}
void FUN11(char data);
void FUN7(char data)
{
    FUN11(data);
}
void FUN9(char data)
{
    {
        ++data;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN11(char data)
{
    if (data < CHAR_MAX)
    {
        ++data;
        char result = data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
