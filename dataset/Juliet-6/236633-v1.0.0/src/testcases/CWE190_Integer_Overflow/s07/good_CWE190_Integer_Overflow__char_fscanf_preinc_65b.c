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
    fscanf (stdin, "%c", &data);
    funcPtr(data);
}
void FUN0(char data)
{
    {
        ++data;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN2(char data)
{
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
