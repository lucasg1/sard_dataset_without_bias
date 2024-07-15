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
    data = CHAR_MAX;
    FUN1(data);
}
void FUN4(char data);
void FUN0(char data)
{
    FUN4(data);
}
void FUN4(char data)
{
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
