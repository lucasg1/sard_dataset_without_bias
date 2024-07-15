void FUN0()
{
    long * data;
    data = NULL;
    {
        long * dataCopy = data;
        long * data = dataCopy;
<START>
        printLongLine(*data);
<END>
    }
}
