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
    fscanf (stdin, "%c", &data);
    FUN2(data);
}
void FUN5(char data);
void FUN6(char data)
{
    FUN5(data);
}
void FUN7(char data);
void FUN8(char data)
{
    FUN7(data);
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
void FUN6(char data);
void FUN9(char data)
{
    FUN6(data);
}
void FUN8(char data);
void FUN11(char data)
{
    FUN8(data);
}
void FUN5(char data)
{
    if(data > 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN7(char data)
{
    if(data > 0) 
    {
        if (data < (CHAR_MAX/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
