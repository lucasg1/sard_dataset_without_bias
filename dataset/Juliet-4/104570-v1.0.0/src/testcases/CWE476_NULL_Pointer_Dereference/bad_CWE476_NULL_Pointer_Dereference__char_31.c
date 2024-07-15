void FUN0()
{
    char * data;
    data = NULL;
    {
        char * dataCopy = data;
        char * data = dataCopy;
<START>
        printHexCharLine(data[0]);
<END>
    }
}
