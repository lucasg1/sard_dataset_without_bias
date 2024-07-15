void FUN0()
{
    void * data;
    data = NULL;
    if(globalTrue)
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
