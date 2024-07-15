void FUN0()
{
    short data;
    data = -1;
    data = CHAR_MAX-5;
    {
        short dataCopy = data;
        short data = dataCopy;
        {
            char charData = (char)data;
            printHexCharLine(charData);
        }
    }
}
