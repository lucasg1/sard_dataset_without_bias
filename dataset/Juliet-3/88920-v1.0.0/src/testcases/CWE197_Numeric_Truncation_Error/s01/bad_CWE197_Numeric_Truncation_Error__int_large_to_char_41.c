void FUN0(int data)
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = SHRT_MAX + 5;
    FUN0(data);
}
