void FUN0()
{
    char data;
    data = ' ';
    while(1)
    {
        data = (char)RAND32();
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    char data;
    data = ' ';
    while(1)
    {
        data = 2;
        break;
    }
    while(1)
    {
        {
            char result = data + 1;
            printHexCharLine(result);
        }
        break;
    }
}
