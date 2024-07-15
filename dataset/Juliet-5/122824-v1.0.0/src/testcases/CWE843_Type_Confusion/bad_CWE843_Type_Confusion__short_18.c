void FUN0()
{
    void * data;
    data = NULL;
    goto source;
source:
    {
        short shortBuffer = 8;
        data = &shortBuffer;
    }
<START>
    printIntLine(*((int*)data));
<END>
}
