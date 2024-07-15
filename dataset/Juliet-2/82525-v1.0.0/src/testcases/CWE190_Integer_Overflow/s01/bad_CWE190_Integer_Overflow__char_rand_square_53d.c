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
void FUN3(char data);
void FUN5()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    FUN3(data);
}
void FUN0(char data)
{
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
