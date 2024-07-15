void FUN0()
{
    void * data;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    {
        void * dataCopy = data;
        void * data = dataCopy;
        printIntLine(*((int*)data));
    }
}
