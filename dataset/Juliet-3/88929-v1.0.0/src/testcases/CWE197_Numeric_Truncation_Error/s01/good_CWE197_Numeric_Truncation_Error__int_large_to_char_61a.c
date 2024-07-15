int FUN0(int data)
{
    data = CHAR_MAX-5;
    return data;
}
int FUN0(int data);
void FUN2()
{
    int data;
    data = -1;
    data = FUN0(data);
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
