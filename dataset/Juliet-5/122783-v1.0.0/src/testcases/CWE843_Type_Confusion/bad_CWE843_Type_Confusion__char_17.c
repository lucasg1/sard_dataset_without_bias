void FUN0()
{
    int i;
    void * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
