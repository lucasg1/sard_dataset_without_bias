void FUN0(char data)
{
    {
        char result = data * data;
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
void FUN3()
{
    char data;
    void (*funcPtr) (char) = FUN2;
    data = ' ';
    data = CHAR_MAX;
    funcPtr(data);
}
