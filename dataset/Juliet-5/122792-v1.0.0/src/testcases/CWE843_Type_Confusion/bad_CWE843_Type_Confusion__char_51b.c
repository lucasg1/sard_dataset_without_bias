void FUN0(void * data);
void FUN1()
{
    void * data;
    data = NULL;
    {
        char charBuffer = 'a';
        data = &charBuffer;
    }
    FUN0(data);
}
void FUN0(void * data)
{
<START>
    printIntLine(*((int*)data));
<END>
}
