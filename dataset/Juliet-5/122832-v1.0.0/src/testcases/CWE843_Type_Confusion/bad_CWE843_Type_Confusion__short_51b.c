void FUN0(void * data);
void FUN1()
{
    void * data;
    data = NULL;
    {
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    FUN0(data);
}
void FUN0(void * data)
{
<START>
    printIntLine(*((int*)data));
<END>
}
