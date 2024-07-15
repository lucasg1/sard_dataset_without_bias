void FUN0()
{
    void * data;
    data = NULL;
    goto source;
source:
    {
        char charBuffer = 'a';
        data = &charBuffer;
    }
<START>
    printIntLine(*((int*)data));
<END>
}
