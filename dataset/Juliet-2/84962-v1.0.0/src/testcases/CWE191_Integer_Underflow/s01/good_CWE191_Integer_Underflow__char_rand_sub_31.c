void FUN0()
{
    char data;
    data = ' ';
    data = -2;
    {
        char dataCopy = data;
        char data = dataCopy;
        {
            char result = data - 1;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    {
        char dataCopy = data;
        char data = dataCopy;
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
}
