static int64_t * VAR0;
static int64_t * VAR1;
void FUN0()
{
    int64_t * data = VAR0;
    printLongLongLine(data[0]);
<START>
    free(data);
<END>
}
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
    VAR0 = data;
    FUN0();
}
