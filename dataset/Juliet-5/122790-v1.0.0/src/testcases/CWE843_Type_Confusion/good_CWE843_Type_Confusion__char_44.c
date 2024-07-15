void FUN0(void * data)
{
    printIntLine(*((int*)data));
}
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
