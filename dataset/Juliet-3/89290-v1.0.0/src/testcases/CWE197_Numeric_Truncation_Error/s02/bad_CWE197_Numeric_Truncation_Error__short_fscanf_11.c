void FUN0()
{
    short data;
    data = -1;
    if(globalReturnsTrue())
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
