void FUN0()
{
    char data;
    data = ' ';
    if(GLOBAL_CONST_TRUE)
    {
        data = (char)RAND32();
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
