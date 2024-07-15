void FUN0()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    {
        char dataCopy = data;
        char data = dataCopy;
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}
