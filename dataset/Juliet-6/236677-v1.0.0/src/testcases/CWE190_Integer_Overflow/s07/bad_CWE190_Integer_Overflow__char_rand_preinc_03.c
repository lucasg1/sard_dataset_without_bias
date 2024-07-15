void FUN0()
{
    char data;
    data = ' ';
    if(5==5)
    {
        data = (char)RAND32();
    }
    if(5==5)
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
