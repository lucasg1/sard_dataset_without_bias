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
        char charBuffer = 'a';
        data = &charBuffer;
    }
    VAR0 = data;
    FUN0();
}
