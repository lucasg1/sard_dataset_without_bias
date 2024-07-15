void FUN0()
{
    void * data;
    data = NULL;
    while(1)
    {
        {
            int intBuffer = 8;
            data = &intBuffer;
        }
        break;
    }
    printIntLine(*((int*)data));
}
