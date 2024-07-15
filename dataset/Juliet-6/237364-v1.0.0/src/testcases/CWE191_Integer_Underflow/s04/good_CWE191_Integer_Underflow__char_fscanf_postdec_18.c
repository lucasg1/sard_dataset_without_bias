void FUN0()
{
    char data;
    data = ' ';
    goto source;
source:
    fscanf (stdin, "%c", &data);
    goto sink;
sink:
    if (data > CHAR_MIN)
    {
        data--;
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
    data = -2;
    goto sink;
sink:
    {
        data--;
        char result = data;
        printHexCharLine(result);
    }
}
