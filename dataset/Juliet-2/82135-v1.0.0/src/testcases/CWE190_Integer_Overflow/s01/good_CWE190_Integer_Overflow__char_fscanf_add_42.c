static char FUN0(char data)
{
    data = 2;
    return data;
}
void FUN1()
{
    char data;
    data = ' ';
    data = FUN0(data);
    {
        char result = data + 1;
        printHexCharLine(result);
    }
}
static char FUN2(char data)
{
    fscanf (stdin, "%c", &data);
    return data;
}
void FUN3()
{
    char data;
    data = ' ';
    data = FUN2(data);
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
