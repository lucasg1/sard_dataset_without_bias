void FUN0()
{
    void * data;
    data = NULL;
    while(1)
    {
        {
            char charBuffer = 'a';
            data = &charBuffer;
        }
        break;
    }
<START>
    printIntLine(*((int*)data));
<END>
}
