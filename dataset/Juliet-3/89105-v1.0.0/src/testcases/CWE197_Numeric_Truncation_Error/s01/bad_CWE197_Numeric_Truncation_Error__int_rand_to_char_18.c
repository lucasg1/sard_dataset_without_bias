void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    data = RAND32();
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
