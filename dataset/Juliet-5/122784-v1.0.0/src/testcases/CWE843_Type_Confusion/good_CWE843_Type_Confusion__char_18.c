void FUN0()
{
    void * data;
    data = NULL;
    goto source;
source:
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    printIntLine(*((int*)data));
}
