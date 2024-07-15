char FUN0(char data)
{
    data = (char)RAND32();
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
        char result = data - 1;
<END>
        printHexCharLine(result);
    }
}
