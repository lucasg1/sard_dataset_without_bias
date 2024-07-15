void FUN0()
{
    void * data;
    data = NULL;
    if(globalFive==5)
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
