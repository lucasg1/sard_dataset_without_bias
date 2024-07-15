void FUN0(int data)
{
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = CHAR_MAX-5;
    FUN0(data);
}
