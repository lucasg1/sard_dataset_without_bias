void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN1(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL; 
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
    FUN1(data);
}
void FUN0(int64_t * data)
{
    printLongLongLine(data[0]);
<START>
    free(data);
<END>
}
