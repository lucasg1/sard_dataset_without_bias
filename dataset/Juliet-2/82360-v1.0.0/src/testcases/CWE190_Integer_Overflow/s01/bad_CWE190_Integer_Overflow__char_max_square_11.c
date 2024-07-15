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
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
