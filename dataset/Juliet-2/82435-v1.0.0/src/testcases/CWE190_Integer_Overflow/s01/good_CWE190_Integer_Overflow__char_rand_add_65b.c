void FUN0(char data);
void FUN1()
{
    char data;
    void (*funcPtr) (char) = FUN0;
    data = ' ';
    data = 2;
    funcPtr(data);
}
void FUN2(char data);
void FUN3()
{
    char data;
    void (*funcPtr) (char) = FUN2;
    data = ' ';
    data = (char)RAND32();
    funcPtr(data);
}
void FUN0(char data)
{
    {
        char result = data + 1;
        printHexCharLine(result);
    }
}
void FUN2(char data)
{
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
