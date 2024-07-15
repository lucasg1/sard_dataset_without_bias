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
void FUN9(char data)
{
    FUN1(data);
}
void FUN3(char data);
void FUN11(char data)
{
    FUN3(data);
}
void FUN9(char data);
void FUN13()
{
    char data;
    data = ' ';
    data = -2;
    FUN9(data);
}
void FUN11(char data);
void FUN15()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN11(data);
}
void FUN4(char data)
{
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN6(char data)
{
    if(data < 0) 
    {
        if (data > (CHAR_MIN/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}
