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
    data = 2;
    FUN1(data);
}
void FUN3(char data);
void FUN7()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    FUN3(data);
}
void FUN9(char data);
void FUN0(char data)
{
    FUN9(data);
}
void FUN11(char data);
void FUN2(char data)
{
    FUN11(data);
}
void FUN9(char data)
{
    {
        char result = data * data;
        printHexCharLine(result);
    }
}
void FUN11(char data)
{
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
