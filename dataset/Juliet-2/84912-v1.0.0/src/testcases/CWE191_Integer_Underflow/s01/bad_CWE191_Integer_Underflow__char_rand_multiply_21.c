static int VAR0 = 0;
void FUN0(char data)
{
    if(VAR0)
    {
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    VAR0 = 1; 
    FUN0(data);
}
