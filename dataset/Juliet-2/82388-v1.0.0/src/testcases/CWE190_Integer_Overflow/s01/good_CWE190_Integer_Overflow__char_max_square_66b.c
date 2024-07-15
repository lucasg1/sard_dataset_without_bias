void FUN0(char dataArray[]);
void FUN1()
{
    char data;
    char dataArray[5];
    data = ' ';
    data = 2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char dataArray[]);
void FUN3()
{
    char data;
    char dataArray[5];
    data = ' ';
    data = CHAR_MAX;
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(char dataArray[])
{
    char data = dataArray[2];
    {
        char result = data * data;
        printHexCharLine(result);
    }
}
void FUN2(char dataArray[])
{
    char data = dataArray[2];
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
