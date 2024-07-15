void FUN0()
{
    char data;
    if(globalTrue)
    {
        data = 'C';
    }
    if(globalTrue)
    {
<START>
        data = 'Z';
<END>
        printHexCharLine(data);
    }
}
