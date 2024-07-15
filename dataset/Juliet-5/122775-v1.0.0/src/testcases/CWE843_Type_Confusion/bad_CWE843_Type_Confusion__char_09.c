void FUN0()
{
    void * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
