void FUN0(void * data);
void FUN1(void * data)
{
    FUN0(data);
}
void FUN1(void * data);
void FUN3(void * data)
{
    FUN1(data);
}
void FUN4(void * data);
void FUN5()
{
    void * data;
    data = NULL;
    {
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    FUN4(data);
}
void FUN3(void * data);
void FUN4(void * data)
{
    FUN3(data);
}
void FUN0(void * data)
{
<START>
    printIntLine(*((int*)data));
<END>
}
