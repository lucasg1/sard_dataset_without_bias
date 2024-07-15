void FUN0(void * data)
{
<START>
    printIntLine(*((int*)data));
<END>
}
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
