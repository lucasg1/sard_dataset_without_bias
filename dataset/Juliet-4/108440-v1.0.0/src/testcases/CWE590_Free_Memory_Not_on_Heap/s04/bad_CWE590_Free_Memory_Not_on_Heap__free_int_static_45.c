static int * VAR0;
static int * VAR1;
void FUN0()
{
    int * data = VAR0;
    printIntLine(data[0]);
<START>
    free(data);
<END>
}
void FUN1()
{
    int * data;
    data = NULL; 
    {
        static int dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    VAR0 = data;
    FUN0();
}
