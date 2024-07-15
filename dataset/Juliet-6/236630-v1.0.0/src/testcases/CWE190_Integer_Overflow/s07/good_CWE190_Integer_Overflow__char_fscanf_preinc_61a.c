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
        ++data;
        char result = data;
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
        ++data;
        char result = data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
