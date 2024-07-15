namespace NAMESPACE0
{
static long * VAR1;
static long * VAR2;
void FUN0()
{
    long * data = VAR2;
    printLongLine(data[0]);
    delete [] data;
}
void FUN1()
{
    long * data;
    data = NULL; 
    {
        long * dataBuffer = new long[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5L;
            }
        }
        data = dataBuffer;
    }
    VAR2 = data;
    FUN0();
}
} 
