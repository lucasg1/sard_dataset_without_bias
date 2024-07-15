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
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    FUN1(data);
}
void FUN2(void * data)
{
<START>
    printIntLine(*((int*)data));
<END>
}
