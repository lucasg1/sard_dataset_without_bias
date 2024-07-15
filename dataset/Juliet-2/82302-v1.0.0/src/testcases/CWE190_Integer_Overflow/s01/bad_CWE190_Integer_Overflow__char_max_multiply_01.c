void FUN0()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    if(data > 0) 
    {
<START>
        char result = data * 2;
<END>
        printHexCharLine(result);
    }
}
