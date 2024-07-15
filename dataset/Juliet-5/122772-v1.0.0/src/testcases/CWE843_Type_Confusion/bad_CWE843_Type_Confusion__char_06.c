static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    void * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
