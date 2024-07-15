char FUN0(char data)
{
    data = CHAR_MIN;
    return data;
}
char FUN0(char data);
void FUN2()
{
    char data;
    data = ' ';
    data = FUN0(data);
    {
<START>
        --data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
