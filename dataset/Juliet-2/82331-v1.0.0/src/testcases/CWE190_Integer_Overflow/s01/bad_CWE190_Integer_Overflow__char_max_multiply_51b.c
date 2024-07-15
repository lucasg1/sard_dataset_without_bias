void FUN0(char data);
void FUN1()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    FUN0(data);
}
void FUN0(char data)
{
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
