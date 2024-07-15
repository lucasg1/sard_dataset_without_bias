void FUN0()
{
    int data;
    data = -1;
    data = RAND32();
    {
        int dataCopy = data;
        int data = dataCopy;
        {
<START>
            short shortData = (short)data;
<END>
            printShortLine(shortData);
        }
    }
}
