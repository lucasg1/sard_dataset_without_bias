void FUN0()
{
    char data;
    data = ' ';
    if(1)
    {
        data = (char)RAND32();
    }
    if(1)
    {
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
