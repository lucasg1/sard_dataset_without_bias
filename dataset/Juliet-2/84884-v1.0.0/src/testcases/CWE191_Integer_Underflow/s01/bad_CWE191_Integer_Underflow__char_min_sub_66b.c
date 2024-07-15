void FUN0(char dataArray[]);
void FUN1()
{
    char data;
    char dataArray[5];
    data = ' ';
    data = CHAR_MIN;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(char dataArray[])
{
    char data = dataArray[2];
    {
<START>
        char result = data - 1;
<END>
        printHexCharLine(result);
    }
}
