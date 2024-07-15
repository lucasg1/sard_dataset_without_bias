void FUN0()
{
    void * data;
    data = NULL;
    if(5==5)
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
