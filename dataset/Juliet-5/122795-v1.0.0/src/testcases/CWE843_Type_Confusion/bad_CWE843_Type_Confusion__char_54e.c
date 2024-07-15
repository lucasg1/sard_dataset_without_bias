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
        char charBuffer = 'a';
        data = &charBuffer;
    }
    FUN1(data);
}
void FUN4(void * data);
void FUN5(void * data)
{
    FUN4(data);
}
void FUN5(void * data);
void FUN0(void * data)
{
    FUN5(data);
}
void FUN4(void * data)
{
<START>
    printIntLine(*((int*)data));
<END>
}
