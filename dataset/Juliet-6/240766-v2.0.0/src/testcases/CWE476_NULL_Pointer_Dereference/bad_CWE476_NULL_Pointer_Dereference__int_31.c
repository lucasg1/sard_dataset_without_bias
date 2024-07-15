void FUN0()
{
    int * data;
    data = NULL;
    {
        int * dataCopy = data;
        int * data = dataCopy;
<START>
        printIntLine(*data);
<END>
    }
}
