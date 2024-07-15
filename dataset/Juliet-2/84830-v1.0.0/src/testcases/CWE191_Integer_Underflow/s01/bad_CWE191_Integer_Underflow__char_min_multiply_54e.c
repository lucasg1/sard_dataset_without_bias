void FUN0(char data);
void FUN1(char data)
{
    FUN0(data);
}
void FUN2(char data);
void FUN0(char data)
{
    FUN2(data);
}
void FUN1(char data);
void FUN5(char data)
{
    FUN1(data);
}
void FUN5(char data);
void FUN7()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    FUN5(data);
}
void FUN2(char data)
{
    if(data < 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
