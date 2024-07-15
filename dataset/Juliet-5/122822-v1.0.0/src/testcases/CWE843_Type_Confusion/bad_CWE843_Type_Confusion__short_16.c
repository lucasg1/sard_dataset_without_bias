void FUN0()
{
    void * data;
    data = NULL;
    while(1)
    {
        {
            short shortBuffer = 8;
            data = &shortBuffer;
        }
        break;
    }
<START>
    printIntLine(*((int*)data));
<END>
}
