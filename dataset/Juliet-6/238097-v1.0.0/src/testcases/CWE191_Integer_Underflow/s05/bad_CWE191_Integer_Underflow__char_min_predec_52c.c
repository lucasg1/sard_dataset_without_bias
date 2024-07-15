void FUN0(char data);
void FUN1(char data)
{
    FUN0(data);
}
void FUN1(char data);
void FUN3()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN1(data);
}
void FUN0(char data)
{
    {
<START>
        --data;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
