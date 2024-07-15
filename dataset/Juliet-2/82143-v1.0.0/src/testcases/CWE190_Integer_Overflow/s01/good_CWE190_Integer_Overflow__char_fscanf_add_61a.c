char FUN0(char data)
{
    data = 2;
    return data;
}
char FUN1(char data)
{
    fscanf (stdin, "%c", &data);
    return data;
}
char FUN0(char data);
void FUN3()
{
    char data;
    data = ' ';
    data = FUN0(data);
    {
        char result = data + 1;
        printHexCharLine(result);
    }
}
char FUN1(char data);
void FUN5()
{
    char data;
    data = ' ';
    data = FUN1(data);
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
