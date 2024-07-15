void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        data = SHRT_MAX + 5;
        break;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
