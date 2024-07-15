void FUN0()
{
    int data;
    data = -1;
    if(5==5)
    {
        data = SHRT_MAX + 5;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
