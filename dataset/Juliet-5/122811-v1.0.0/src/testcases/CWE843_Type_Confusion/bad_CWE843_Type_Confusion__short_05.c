static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    void * data;
    data = NULL;
    if(staticTrue)
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
