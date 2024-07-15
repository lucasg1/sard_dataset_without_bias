void FUN0()
{
    void * data;
    data = NULL;
    if(1)
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
