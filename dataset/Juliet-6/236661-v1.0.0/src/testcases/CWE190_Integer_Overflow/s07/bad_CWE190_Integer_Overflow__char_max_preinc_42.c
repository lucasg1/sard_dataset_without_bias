static char FUN0(char data)
{
    data = CHAR_MAX;
    return data;
}
void FUN1()
{
    char data;
    data = ' ';
    data = FUN0(data);
    {
<START>
        ++data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
