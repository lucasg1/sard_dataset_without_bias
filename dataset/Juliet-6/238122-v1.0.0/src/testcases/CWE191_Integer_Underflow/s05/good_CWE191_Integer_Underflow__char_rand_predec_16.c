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
        if (data > CHAR_MIN)
        {
            --data;
            char result = data;
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
        data = -2;
        break;
    }
    while(1)
    {
        {
            --data;
            char result = data;
            printHexCharLine(result);
        }
        break;
    }
}
