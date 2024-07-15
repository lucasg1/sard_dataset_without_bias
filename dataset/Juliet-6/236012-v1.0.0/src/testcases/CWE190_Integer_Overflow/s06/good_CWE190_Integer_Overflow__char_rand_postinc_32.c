void FUN0()
{
    char data;
    char *dataPtr1 = &data;
    char *dataPtr2 = &data;
    data = ' ';
    {
        char data = *dataPtr1;
        data = 2;
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    char *dataPtr1 = &data;
    char *dataPtr2 = &data;
    data = ' ';
    {
        char data = *dataPtr1;
        data = (char)RAND32();
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
        if (data < CHAR_MAX)
        {
            data++;
            char result = data;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
