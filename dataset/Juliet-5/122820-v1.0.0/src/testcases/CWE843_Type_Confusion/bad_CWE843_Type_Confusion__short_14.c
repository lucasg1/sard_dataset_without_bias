void FUN0()
{
    void * data;
    data = NULL;
    if(globalFive==5)
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
