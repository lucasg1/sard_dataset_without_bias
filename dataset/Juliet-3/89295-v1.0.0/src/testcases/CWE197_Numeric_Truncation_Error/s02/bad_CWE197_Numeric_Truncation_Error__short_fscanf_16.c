void FUN0()
{
    short data;
    data = -1;
    while(1)
    {
        fscanf (stdin, "%hd", &data);
        break;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
