void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    data = SHRT_MAX + 5;
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
