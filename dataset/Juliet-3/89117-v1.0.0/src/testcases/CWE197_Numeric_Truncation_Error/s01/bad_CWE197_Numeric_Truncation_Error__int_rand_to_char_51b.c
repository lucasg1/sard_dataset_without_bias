void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    FUN0(data);
}
void FUN0(int data)
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
