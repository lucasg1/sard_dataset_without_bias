void FUN0()
{
    int data;
    data = -1;
    data = CHAR_MAX-5;
    {
        int dataCopy = data;
        int data = dataCopy;
        {
            short shortData = (short)data;
            printShortLine(shortData);
        }
    }
}
