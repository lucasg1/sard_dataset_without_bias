void FUN0()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    if(data < 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
