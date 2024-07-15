namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    void * &dataRef = data;
    data = NULL;
    {
        short shortBuffer = 8;
        data = &shortBuffer;
    }
    {
        void * data = dataRef;
<START>
        printIntLine(*((int*)data));
<END>
    }
}
} 
