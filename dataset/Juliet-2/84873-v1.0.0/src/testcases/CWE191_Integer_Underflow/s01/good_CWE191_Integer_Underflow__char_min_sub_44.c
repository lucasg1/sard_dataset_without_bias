void FUN0(char data)
{
    {
        char result = data - 1;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    void (*funcPtr) (char) = FUN0;
    data = ' ';
    data = -2;
    funcPtr(data);
}
void FUN2(char data)
{
    if (data > CHAR_MIN)
    {
        char result = data - 1;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
void FUN3()
{
    char data;
    void (*funcPtr) (char) = FUN2;
    data = ' ';
    data = CHAR_MIN;
    funcPtr(data);
}
