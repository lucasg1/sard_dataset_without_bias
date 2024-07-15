void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN0(data);
}
void FUN2(char data);
void FUN3(char data)
{
    FUN2(data);
}
void FUN4(char data);
void FUN2(char data)
{
    FUN4(data);
}
void FUN3(char data);
void FUN0(char data)
{
    FUN3(data);
}
void FUN4(char data)
{
    {
<START>
        char result = data - 1;
<END>
        printHexCharLine(result);
    }
}
