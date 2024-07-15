static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    void * data;
    data = NULL;
    if(staticTrue)
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
