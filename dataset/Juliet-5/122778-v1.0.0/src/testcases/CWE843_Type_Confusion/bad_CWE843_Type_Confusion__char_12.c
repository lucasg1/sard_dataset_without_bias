void FUN0()
{
    void * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            char charBuffer = 'a';
            data = &charBuffer;
        }
    }
    else
    {
        {
            int intBuffer = 8;
            data = &intBuffer;
        }
    }
<START>
    printIntLine(*((int*)data));
<END>
}
