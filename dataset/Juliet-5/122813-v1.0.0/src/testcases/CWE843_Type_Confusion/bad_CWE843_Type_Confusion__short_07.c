static int staticFive = 5;
void FUN0()
{
    void * data;
    data = NULL;
    if(staticFive==5)
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
