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
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
