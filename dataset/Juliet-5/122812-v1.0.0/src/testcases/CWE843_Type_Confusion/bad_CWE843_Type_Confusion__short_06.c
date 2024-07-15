static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    void * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
