void FUN0()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        data = (char)RAND32();
    }
    if(globalTrue)
    {
        if(data > 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}
