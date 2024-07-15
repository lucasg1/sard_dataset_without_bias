void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        data = (char)RAND32();
    }
    if(globalReturnsTrue())
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
