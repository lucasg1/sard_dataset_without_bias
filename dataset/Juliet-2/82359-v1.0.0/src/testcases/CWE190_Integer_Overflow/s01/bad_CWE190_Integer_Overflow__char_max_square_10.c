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
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
