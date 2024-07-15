void FUN0()
{
    void * data;
    data = NULL;
    if(5==5)
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
