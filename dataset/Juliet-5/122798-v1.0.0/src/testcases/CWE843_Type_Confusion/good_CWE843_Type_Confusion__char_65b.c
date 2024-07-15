void FUN0(void * data);
void FUN1()
{
    void * data;
    void (*funcPtr) (void *) = FUN0;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    funcPtr(data);
}
void FUN0(void * data)
{
    printIntLine(*((int*)data));
}
