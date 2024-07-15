namespace NAMESPACE0
{
void FUN0(int * data)
{
    printIntLine(*data);
<START>
    delete data;
<END>
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL; 
    {
        static int dataBuffer;
        dataBuffer = 5;
        data = &dataBuffer;
    }
    funcPtr(data);
}
} 
