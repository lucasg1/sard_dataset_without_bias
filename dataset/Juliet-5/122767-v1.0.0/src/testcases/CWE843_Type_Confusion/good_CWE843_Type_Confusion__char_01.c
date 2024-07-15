void FUN0()
{
    void * data;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    printIntLine(*((int*)data));
}
