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
        char result = data - 1;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
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
        char result = data - 1;
        printHexCharLine(result);
    }
}
