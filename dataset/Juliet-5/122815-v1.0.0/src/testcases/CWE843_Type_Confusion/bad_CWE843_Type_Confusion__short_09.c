void FUN0()
{
    void * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        {
            short shortBuffer = 8;
            data = &shortBuffer;
        }
    }
<START>
    printIntLine(*((int*)data));
<END>
}
