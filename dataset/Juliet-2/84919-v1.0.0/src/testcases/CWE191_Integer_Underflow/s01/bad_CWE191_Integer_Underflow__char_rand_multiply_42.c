static char FUN0(char data)
{
    data = (char)RAND32();
    return data;
}
void FUN1()
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
