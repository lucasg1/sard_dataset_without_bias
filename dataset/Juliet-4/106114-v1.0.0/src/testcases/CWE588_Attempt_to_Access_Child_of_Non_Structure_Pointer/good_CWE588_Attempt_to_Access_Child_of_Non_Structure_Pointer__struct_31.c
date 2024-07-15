void FUN0()
{
    void * data;
    twoIntsStruct dataGoodBuffer;
    int VAR0 = 100;
    dataGoodBuffer.intOne = 0;
    dataGoodBuffer.intTwo = 0;
    data = &dataGoodBuffer;
    {
        void * dataCopy = data;
        void * data = dataCopy;
        printStructLine((twoIntsStruct *)data);
    }
}
