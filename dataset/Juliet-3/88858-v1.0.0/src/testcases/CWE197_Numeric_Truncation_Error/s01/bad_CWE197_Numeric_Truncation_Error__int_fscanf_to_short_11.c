void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
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
