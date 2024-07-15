static int staticFive = 5;
void FUN0()
{
    void * data;
    data = NULL;
    if(staticFive==5)
    {
        {
            char charBuffer = 'a';
            data = &charBuffer;
        }
    }
<START>
    printIntLine(*((int*)data));
<END>
}
