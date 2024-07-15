void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        data = CHAR_MIN;
    }
    if(globalReturnsTrue())
    {
        {
<START>
            data--;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
