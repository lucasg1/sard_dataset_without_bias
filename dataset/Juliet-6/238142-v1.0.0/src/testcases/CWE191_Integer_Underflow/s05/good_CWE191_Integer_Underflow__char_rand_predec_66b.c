void FUN0(char dataArray[]);
void FUN1()
{
    char data;
    char dataArray[5];
    data = ' ';
    data = -2;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(char dataArray[]);
void FUN3()
{
    char data;
    char dataArray[5];
    data = ' ';
    data = (char)RAND32();
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(char dataArray[])
{
    char data = dataArray[2];
    {
        --data;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN2(char dataArray[])
{
    char data = dataArray[2];
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
}
