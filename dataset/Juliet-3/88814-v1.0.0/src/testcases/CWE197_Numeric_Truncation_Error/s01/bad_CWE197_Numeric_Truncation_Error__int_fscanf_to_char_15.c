void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        fscanf(stdin, "%d", &data);
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
