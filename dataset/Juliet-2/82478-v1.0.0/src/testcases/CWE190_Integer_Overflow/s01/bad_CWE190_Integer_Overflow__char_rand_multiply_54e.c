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
void FUN6(char data);
void FUN0(char data)
{
    FUN6(data);
}
void FUN6(char data)
{
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
