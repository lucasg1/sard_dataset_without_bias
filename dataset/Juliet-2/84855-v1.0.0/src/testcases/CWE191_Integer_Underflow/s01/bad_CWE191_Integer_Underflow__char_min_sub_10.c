void FUN0()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        data = CHAR_MIN;
    }
    if(globalTrue)
    {
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
