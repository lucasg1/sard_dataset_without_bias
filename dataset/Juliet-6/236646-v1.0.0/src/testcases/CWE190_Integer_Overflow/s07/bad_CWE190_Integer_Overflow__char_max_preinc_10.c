void FUN0()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        data = CHAR_MAX;
    }
    if(globalTrue)
    {
        {
<START>
            ++data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
