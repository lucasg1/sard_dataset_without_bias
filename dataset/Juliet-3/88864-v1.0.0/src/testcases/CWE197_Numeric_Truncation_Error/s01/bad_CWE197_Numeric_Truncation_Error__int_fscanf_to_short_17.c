void FUN0()
{
    int i;
    int data;
    data = -1;
    for(i = 0; i < 1; i++)
    {
        fscanf(stdin, "%d", &data);
    }
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
