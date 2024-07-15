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
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}
