void * VAR0;
void * VAR1;
void FUN0()
{
    void * data = VAR0;
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
    VAR0 = data;
    FUN0();
}
