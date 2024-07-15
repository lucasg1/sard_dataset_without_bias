static char FUN0(char data)
{
    data = CHAR_MIN;
    return data;
}
void FUN1()
{
    char data;
    data = ' ';
    data = FUN0(data);
    {
<START>
        char result = data - 1;
<END>
        printHexCharLine(result);
    }
}
