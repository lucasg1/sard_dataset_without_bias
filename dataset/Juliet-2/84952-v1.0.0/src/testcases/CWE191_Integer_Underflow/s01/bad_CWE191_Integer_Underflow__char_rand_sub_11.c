void FUN0()
{
    char data;
    data = ' ';
    if(globalReturnsTrue())
    {
        data = (char)RAND32();
    }
    if(globalReturnsTrue())
    {
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
