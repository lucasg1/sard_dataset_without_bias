void FUN0()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_TRUE)
    {
        data = CHAR_MIN;
    }
    if(GLOBAL_CONST_TRUE)
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
