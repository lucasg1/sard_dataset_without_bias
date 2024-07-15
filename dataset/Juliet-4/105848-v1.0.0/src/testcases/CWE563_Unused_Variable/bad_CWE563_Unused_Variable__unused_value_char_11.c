void FUN0()
{
    char data;
    if(globalReturnsTrue())
    {
        data = 'C';
    }
    if(globalReturnsTrue())
    {
<START>
        data = 'Z';
<END>
        printHexCharLine(data);
    }
}
