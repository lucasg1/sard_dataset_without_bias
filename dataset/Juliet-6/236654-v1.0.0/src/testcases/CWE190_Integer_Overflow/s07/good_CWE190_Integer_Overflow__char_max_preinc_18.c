void FUN0()
{
    char data;
    data = ' ';
    goto source;
source:
    data = CHAR_MAX;
    goto sink;
sink:
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
void FUN1()
{
    char data;
    data = ' ';
    goto source;
source:
    data = 2;
    goto sink;
sink:
    {
        ++data;
        char result = data;
        printHexCharLine(result);
    }
}
