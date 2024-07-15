void FUN0(void * data);
void FUN1(void * data)
{
    FUN0(data);
}
void FUN2(void * data);
void FUN0(void * data)
{
    FUN2(data);
}
void FUN1(void * data);
void FUN5()
{
    void * data;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    FUN1(data);
}
void FUN2(void * data)
{
    printIntLine(*((int*)data));
}
