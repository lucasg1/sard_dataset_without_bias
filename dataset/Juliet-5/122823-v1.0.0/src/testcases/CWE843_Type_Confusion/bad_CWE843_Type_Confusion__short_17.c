void FUN0()
{
    int i;
    void * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
