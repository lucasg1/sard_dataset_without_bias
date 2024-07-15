void FUN0(char data)
{
    {
<START>
        data--;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN0(data);
}
