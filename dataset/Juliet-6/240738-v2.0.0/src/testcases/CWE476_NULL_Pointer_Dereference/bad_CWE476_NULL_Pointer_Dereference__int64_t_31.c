void FUN0()
{
    int64_t * data;
    data = NULL;
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
<START>
        printLongLongLine(*data);
<END>
    }
}
