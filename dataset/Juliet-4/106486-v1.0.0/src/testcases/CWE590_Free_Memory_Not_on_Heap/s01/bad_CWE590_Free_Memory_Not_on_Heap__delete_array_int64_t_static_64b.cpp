namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    int64_t * data;
    data = NULL; 
    {
        static int64_t dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    int64_t * * dataPtr = (int64_t * *)dataVoidPtr;
    int64_t * data = (*dataPtr);
    printLongLongLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
