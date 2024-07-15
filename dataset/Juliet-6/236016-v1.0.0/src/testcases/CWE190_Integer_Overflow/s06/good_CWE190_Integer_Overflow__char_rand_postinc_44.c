void FUN0(char data)
{
    {
        data++;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    void (*funcPtr) (char) = FUN0;
    data = ' ';
    data = 2;
    funcPtr(data);
}
void FUN2(char data)
{
    if (data < CHAR_MAX)
    {
        data++;
        char result = data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
void FUN3()
{
    char data;
    void (*funcPtr) (char) = FUN2;
    data = ' ';
    data = (char)RAND32();
    funcPtr(data);
}
