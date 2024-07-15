void FUN0()
{
    int data;
    data = -1;
    goto source;
source:
    fscanf(stdin, "%d", &data);
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
