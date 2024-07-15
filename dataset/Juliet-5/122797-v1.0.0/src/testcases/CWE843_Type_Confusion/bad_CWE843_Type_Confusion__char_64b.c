void FUN0(void * dataVoidPtr);
void FUN1()
{
    void * data;
    data = NULL;
    {
        char charBuffer = 'a';
        data = &charBuffer;
    }
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    void * * dataPtr = (void * *)dataVoidPtr;
    void * data = (*dataPtr);
<START>
    printIntLine(*((int*)data));
<END>
}
