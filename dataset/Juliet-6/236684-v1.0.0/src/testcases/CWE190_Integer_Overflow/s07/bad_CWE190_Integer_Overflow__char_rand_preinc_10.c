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
            ++data;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
