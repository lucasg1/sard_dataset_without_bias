void FUN0()
{
    short data;
    data = -1;
    data = CHAR_MAX + 1;
    {
        short dataCopy = data;
        short data = dataCopy;
        {
<START>
            char charData = (char)data;
<END>
            printHexCharLine(charData);
        }
    }
}
