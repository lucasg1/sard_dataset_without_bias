void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        data = CHAR_MAX;
    }
    if(globalReturnsTrue())
    {
        {
<START>
            char result = data + 1;
<END>
            printHexCharLine(result);
        }
    }
}
