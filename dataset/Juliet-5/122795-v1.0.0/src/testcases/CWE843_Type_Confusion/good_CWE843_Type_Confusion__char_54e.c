void FUN0(void * data);
void FUN1(void * data)
{
    FUN0(data);
}
void FUN1(void * data);
void FUN3()
{
    void * data;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    FUN1(data);
}
void FUN5(void * data);
void FUN6(void * data)
{
    FUN5(data);
}
void FUN6(void * data);
void FUN0(void * data)
{
    FUN6(data);
}
void FUN5(void * data)
{
    printIntLine(*((int*)data));
}
