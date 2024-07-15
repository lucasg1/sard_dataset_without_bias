void FUN0()
{
    char data;
    data = ' ';
    if(globalTrue)
    {
        data = (char)RAND32();
    }
    if(globalTrue)
    {
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
