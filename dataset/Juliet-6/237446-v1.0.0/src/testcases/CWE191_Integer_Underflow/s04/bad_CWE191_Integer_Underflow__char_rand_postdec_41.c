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
    data = (char)RAND32();
    FUN0(data);
}
