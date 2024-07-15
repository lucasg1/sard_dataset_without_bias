void FUN0()
{
    void * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        {
            short shortBuffer = 8;
            data = &shortBuffer;
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
