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
            data++;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
