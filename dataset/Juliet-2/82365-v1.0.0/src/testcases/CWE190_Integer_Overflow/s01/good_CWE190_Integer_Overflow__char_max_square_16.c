void FUN0()
{
    char data;
    data = ' ';
    while(1)
    {
        data = CHAR_MAX;
        break;
    }
    while(1)
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
            char result = data * data;
            printHexCharLine(result);
        }
        break;
    }
}
