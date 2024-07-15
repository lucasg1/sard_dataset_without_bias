void FUN0()
{
    short data;
    data = -1;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = CHAR_MAX-5;
        break;
    }
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
void FUN1()
{
    short data;
    data = -1;
    switch(6)
    {
    case 6:
        data = CHAR_MAX-5;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
