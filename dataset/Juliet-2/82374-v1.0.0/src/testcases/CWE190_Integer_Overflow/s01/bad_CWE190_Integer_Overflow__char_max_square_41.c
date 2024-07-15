void FUN0(char data)
{
    {
<START>
        char result = data * data;
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
