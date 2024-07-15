void FUN0()
{
    char data;
    data = ' ';
    data = 2;
    {
        char result = data * data;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    data = ' ';
    fscanf (stdin, "%c", &data);
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
