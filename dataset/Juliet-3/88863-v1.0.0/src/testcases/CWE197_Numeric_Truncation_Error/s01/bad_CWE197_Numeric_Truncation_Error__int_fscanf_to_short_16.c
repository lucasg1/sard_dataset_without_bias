void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        fscanf(stdin, "%d", &data);
        break;
    }
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
