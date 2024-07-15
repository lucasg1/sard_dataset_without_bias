static long * VAR0;
static long * VAR1;
void FUN0()
{
    long * data = VAR0;
    printLongLine(data[0]);
<START>
    free(data);
<END>
}
void FUN1()
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
    VAR0 = data;
    FUN0();
}
