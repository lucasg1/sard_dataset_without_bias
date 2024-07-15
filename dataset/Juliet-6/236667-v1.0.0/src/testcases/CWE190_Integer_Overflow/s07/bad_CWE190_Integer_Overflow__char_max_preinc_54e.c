void FUN0(char data);
void FUN1(char data)
{
    FUN0(data);
}
void FUN2(char data);
void FUN3(char data)
{
    FUN2(data);
}
void FUN3(char data);
void FUN0(char data)
{
    FUN3(data);
}
void FUN1(char data);
void FUN7()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    FUN1(data);
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
