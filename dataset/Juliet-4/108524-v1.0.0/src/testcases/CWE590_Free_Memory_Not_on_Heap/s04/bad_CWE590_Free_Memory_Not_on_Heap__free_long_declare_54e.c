void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN2(long * data);
void FUN3()
{
    long * data;
    data = NULL; 
    {
        long dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    FUN2(data);
}
void FUN4(long * data);
void FUN2(long * data)
{
    FUN4(data);
}
void FUN1(long * data);
void FUN4(long * data)
{
    FUN1(data);
}
void FUN0(long * data)
{
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
