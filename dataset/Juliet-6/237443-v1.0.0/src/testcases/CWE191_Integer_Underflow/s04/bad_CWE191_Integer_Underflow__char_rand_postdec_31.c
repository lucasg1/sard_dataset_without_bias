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
            data--;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}
