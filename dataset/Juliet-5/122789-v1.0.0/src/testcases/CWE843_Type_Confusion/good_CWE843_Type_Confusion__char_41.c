void FUN0(void * data)
{
    printIntLine(*((int*)data));
}
void FUN1()
{
    void * data;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    FUN0(data);
}
