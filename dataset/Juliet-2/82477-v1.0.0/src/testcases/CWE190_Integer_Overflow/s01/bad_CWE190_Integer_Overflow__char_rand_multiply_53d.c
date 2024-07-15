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
    data = (char)RAND32();
    FUN1(data);
}
void FUN4(char data);
void FUN0(char data)
{
    FUN4(data);
}
void FUN4(char data)
{
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
