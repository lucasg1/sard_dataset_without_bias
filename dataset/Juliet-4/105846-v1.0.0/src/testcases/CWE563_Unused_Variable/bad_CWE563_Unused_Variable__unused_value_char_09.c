void FUN0()
{
    char data;
    if(GLOBAL_CONST_TRUE)
    {
        data = 'C';
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        data = 'Z';
<END>
        printHexCharLine(data);
    }
}
