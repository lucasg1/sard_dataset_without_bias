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
void FUN5(char data);
void FUN9()
{
    char data;
    data = ' ';
    data = -2;
    FUN5(data);
}
void FUN7(char data);
void FUN11()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    FUN7(data);
}
void FUN0(char data)
{
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN2(char data)
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
