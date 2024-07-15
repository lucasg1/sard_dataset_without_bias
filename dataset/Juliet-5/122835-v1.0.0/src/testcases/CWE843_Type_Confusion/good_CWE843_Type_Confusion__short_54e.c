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
        int intBuffer = 8;
        data = &intBuffer;
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
    printIntLine(*((int*)data));
}
