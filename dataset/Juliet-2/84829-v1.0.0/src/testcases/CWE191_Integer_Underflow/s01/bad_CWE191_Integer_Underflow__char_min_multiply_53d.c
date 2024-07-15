void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
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
