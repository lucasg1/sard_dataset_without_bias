void FUN0()
{
    void * data;
    void * *dataPtr1 = &data;
    void * *dataPtr2 = &data;
    data = NULL;
    {
        void * data = *dataPtr1;
        {
            int intBuffer = 8;
            data = &intBuffer;
        }
        *dataPtr1 = data;
    }
    {
        void * data = *dataPtr2;
        printIntLine(*((int*)data));
    }
}
