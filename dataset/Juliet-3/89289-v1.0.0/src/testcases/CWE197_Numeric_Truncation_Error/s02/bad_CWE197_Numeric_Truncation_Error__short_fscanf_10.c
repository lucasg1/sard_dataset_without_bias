void FUN0()
{
    short data;
    data = -1;
    if(globalTrue)
    {
        fscanf (stdin, "%hd", &data);
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
