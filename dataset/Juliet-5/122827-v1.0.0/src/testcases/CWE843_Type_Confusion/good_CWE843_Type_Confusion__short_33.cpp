namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * &dataRef = data;
    data = NULL;
    {
        int intBuffer = 8;
        data = &intBuffer;
    }
    {
        void * data = dataRef;
        printIntLine(*((int*)data));
    }
}
} 
