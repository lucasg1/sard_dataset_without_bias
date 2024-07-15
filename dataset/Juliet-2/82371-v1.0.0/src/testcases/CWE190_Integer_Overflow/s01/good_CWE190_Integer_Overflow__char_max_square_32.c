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
            char result = data * data;
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
        data = CHAR_MAX;
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
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
}
