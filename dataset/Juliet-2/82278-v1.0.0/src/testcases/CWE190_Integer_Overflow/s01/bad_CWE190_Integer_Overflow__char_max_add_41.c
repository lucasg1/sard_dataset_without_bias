void FUN0(char data)
{
    {
<START>
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    FUN0(data);
}
