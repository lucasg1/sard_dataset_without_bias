void FUN0(char data);
void FUN1(char data)
{
    FUN0(data);
}
void FUN1(char data);
void FUN3(char data)
{
    FUN1(data);
}
void FUN4(char data);
void FUN0(char data)
{
    FUN4(data);
}
void FUN3(char data);
void FUN7()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN3(data);
}
void FUN4(char data)
{
    {
<START>
        data--;
<END>
        char result = data;
        printHexCharLine(result);
    }
}
