namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR1;
    printIntLine(data[0]);
<START>
    delete [] data;
<END>
}
void FUN1()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = (int *)ALLOCA(100*sizeof(int));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
} 
