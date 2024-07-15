void FUN0(void * * data);
void FUN1()
{
    void * data;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    FUN0(&data);
}
void FUN0(void * * dataPtr)
{
    void * data = *dataPtr;
    printIntLine(*((int*)data));
}
