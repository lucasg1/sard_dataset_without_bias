void FUN0()
{
    void * data;
    void * *dataPtr1 = &data;
    void * *dataPtr2 = &data;
    data = NULL;
    {
        void * data = *dataPtr1;
        {
            char charBuffer = 'a';
            data = &charBuffer;
        }
        *dataPtr1 = data;
    }
    {
        void * data = *dataPtr2;
<START>
        printIntLine(*((int*)data));
<END>
    }
}
