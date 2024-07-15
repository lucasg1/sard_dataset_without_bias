void FUN0()
{
    int data;
    data = -1;
    data = CHAR_MAX-5;
    {
        int dataCopy = data;
        int data = dataCopy;
        {
            char charData = (char)data;
            printHexCharLine(charData);
        }
    }
}
