namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    printLongLongLine(data[0]);
<START>
    delete [] data;
<END>
}
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL; 
    {
        int64_t dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    funcPtr(data);
}
} 
