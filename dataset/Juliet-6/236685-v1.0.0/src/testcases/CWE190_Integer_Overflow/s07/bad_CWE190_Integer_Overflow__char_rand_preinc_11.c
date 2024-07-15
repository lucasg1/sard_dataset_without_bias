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
            ++data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
