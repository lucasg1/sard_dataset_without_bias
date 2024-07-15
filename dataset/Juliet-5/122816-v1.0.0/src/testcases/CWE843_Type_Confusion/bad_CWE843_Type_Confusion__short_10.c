void FUN0()
{
    void * data;
    data = NULL;
    if(globalTrue)
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
