void FUN0()
{
    void * data;
    data = NULL;
    {
        char charBuffer = 'a';
        data = &charBuffer;
    }
<START>
    printIntLine(*((int*)data));
<END>
}
