void FUN0(char * data);
void FUN1()
{
    char data;
    data = ' ';
    data = -2;
    FUN0(&data);
}
void FUN2(char * data);
void FUN3()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN2(&data);
}
void FUN0(char * dataPtr)
{
    char data = *dataPtr;
    {
        char result = data - 1;
        printHexCharLine(result);
    }
}
void FUN2(char * dataPtr)
{
    char data = *dataPtr;
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
