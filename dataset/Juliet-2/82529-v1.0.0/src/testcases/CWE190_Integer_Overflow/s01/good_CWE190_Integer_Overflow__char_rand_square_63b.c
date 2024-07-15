void FUN0(char * data);
void FUN1()
{
    char data;
    data = ' ';
    data = 2;
    FUN0(&data);
}
void FUN2(char * data);
void FUN3()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN2(&data);
}
void FUN0(char * dataPtr)
{
    char data = *dataPtr;
    {
        char result = data * data;
        printHexCharLine(result);
    }
}
void FUN2(char * dataPtr)
{
    char data = *dataPtr;
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
