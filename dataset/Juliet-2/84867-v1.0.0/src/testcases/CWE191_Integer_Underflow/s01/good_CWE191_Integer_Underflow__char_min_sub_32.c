void FUN0()
{
    char data;
    char *dataPtr1 = &data;
    char *dataPtr2 = &data;
    data = ' ';
    {
        char data = *dataPtr1;
        data = -2;
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
        {
            char result = data - 1;
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
        data = CHAR_MIN;
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
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
