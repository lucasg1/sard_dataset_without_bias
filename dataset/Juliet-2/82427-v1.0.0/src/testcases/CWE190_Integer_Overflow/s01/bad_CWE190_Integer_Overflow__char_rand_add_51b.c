void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN0(data);
}
void FUN0(char data)
{
    {
<START>
        char result = data + 1;
<END>
        printHexCharLine(result);
    }
}
