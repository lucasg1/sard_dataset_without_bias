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
            --data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
