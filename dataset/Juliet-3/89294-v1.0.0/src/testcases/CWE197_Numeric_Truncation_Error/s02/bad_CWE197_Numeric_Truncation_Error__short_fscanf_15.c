void FUN0()
{
    short data;
    data = -1;
    switch(6)
    {
    case 6:
        fscanf (stdin, "%hd", &data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
