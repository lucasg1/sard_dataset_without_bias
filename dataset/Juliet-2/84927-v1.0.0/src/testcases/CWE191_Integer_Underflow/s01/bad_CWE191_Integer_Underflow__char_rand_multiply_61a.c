char FUN0(char data)
{
    data = (char)RAND32();
    return data;
}
char FUN0(char data);
void FUN2()
{
    char data;
    data = ' ';
    data = FUN0(data);
    if(data < 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
