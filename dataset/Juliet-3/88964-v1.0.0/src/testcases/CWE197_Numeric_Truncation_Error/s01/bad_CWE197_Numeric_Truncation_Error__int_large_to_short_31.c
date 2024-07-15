void FUN0()
{
    int data;
    data = -1;
    data = SHRT_MAX + 5;
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
