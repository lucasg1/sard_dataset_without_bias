namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL; 
    if(5==5)
    {
        {
            int64_t * dataBuffer = (int64_t *)ALLOCA(100*sizeof(int64_t));
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    dataBuffer[i] = 5LL;
                }
            }
            data = dataBuffer;
        }
    }
    printLongLongLine(data[0]);
<START>
    delete [] data;
<END>
}
} 
