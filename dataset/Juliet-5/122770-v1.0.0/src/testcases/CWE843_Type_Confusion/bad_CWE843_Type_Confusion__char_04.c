static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    void * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
