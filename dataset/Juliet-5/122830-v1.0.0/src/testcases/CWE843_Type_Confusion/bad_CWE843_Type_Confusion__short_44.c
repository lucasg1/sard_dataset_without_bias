void FUN0(void * data)
{
<START>
    printIntLine(*((int*)data));
<END>
}
void FUN1()
{
    void * data;
    void (*funcPtr) (void *) = FUN0;
    data = NULL;
    {
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    funcPtr(data);
}
