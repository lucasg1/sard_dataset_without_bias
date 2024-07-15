void FUN0()
{
    void * data;
    void * *dataPtr1 = &data;
    void * *dataPtr2 = &data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    {
        void * data = *dataPtr1;
        data = &VAR0;
        *dataPtr1 = data;
    }
    {
        void * data = *dataPtr2;
<START>
        printStructLine((twoIntsStruct *)data);
<END>
    }
}
