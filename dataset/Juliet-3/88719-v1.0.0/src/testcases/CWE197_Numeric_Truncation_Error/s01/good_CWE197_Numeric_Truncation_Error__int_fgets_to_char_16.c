void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        data = CHAR_MAX-5;
        break;
    }
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
