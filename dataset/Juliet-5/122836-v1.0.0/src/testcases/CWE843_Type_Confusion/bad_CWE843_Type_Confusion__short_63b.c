void FUN0(void * * dataPtr);
void FUN1()
{
    void * data;
    data = NULL;
    {
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    FUN0(&data);
}
void FUN0(void * * dataPtr)
{
    void * data = *dataPtr;
<START>
    printIntLine(*((int*)data));
<END>
}
