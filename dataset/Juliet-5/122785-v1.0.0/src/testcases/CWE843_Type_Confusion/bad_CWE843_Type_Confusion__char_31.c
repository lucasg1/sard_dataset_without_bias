void FUN0()
{
    void * data;
    data = NULL;
    {
        char charBuffer = 'a';
        data = &charBuffer;
    }
    {
        void * dataCopy = data;
        void * data = dataCopy;
<START>
        printIntLine(*((int*)data));
<END>
    }
}
