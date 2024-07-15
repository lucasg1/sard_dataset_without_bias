void FUN0()
{
    void * data;
    data = NULL;
    {
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    {
        void * dataCopy = data;
        void * data = dataCopy;
<START>
        printIntLine(*((int*)data));
<END>
    }
}
