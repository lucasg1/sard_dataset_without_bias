void FUN0()
{
    char data;
    data = ' ';
    data = -2;
    {
        char dataCopy = data;
        char data = dataCopy;
        {
            data--;
            char result = data;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
    {
        char dataCopy = data;
        char data = dataCopy;
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
}
