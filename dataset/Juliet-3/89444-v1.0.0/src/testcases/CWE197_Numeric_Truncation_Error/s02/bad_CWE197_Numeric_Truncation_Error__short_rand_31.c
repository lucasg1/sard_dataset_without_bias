void FUN0()
{
    short data;
    data = -1;
    data = (short)RAND32();
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
