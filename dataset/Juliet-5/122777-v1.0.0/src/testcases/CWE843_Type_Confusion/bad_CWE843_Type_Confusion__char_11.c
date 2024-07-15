void FUN0()
{
    void * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        {
            char charBuffer = 'a';
            data = &charBuffer;
        }
    }
<START>
    printIntLine(*((int*)data));
<END>
}
