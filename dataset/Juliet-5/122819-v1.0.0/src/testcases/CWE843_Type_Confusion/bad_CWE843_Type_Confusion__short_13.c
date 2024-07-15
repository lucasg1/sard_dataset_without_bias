void FUN0()
{
    void * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
