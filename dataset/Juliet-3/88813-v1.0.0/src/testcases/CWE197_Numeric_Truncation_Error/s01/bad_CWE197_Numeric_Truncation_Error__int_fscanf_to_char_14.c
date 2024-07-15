void FUN0()
{
    int data;
    data = -1;
    if(globalFive==5)
    {
        fscanf(stdin, "%d", &data);
    }
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
