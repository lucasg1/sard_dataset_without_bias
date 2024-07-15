static int FUN0(int data)
{
    data = RAND32();
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    data = FUN0(data);
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
