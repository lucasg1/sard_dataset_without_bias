void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    FUN0(data);
}
void FUN2(char data);
void FUN0(char data)
{
    FUN2(data);
}
void FUN2(char data)
{
    {
<START>
        ++data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
