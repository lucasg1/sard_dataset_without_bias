void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN1(int64_t * data);
void FUN3(int64_t * data)
{
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL; 
    {
        int64_t * dataBuffer = (int64_t *)malloc(100*sizeof(int64_t));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5LL;
            }
        }
        data = dataBuffer;
    }
    FUN3(data);
}
void FUN7(int64_t * data);
void FUN0(int64_t * data)
{
    FUN7(data);
}
void FUN7(int64_t * data)
{
    printLongLongLine(data[0]);
    free(data);
}
