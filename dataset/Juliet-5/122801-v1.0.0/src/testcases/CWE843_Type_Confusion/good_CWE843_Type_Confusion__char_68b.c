void * VAR0;
void * VAR1;
void FUN0();
void FUN1()
{
    void * data;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    VAR1 = data;
    FUN0();
}
extern void * VAR0;
extern void * VAR1;
void FUN0()
{
    void * data = VAR1;
    printIntLine(*((int*)data));
}
