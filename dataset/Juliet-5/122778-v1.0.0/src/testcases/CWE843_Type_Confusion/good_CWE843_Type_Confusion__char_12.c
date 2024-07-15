void FUN0()
{
    void * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    else
    {
        {
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
    printIntLine(*((int*)data));
}
