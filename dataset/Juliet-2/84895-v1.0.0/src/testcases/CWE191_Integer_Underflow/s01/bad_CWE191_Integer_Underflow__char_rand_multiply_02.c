void FUN0()
{
    char data;
    data = ' ';
    if(1)
    {
        data = (char)RAND32();
    }
    if(1)
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
