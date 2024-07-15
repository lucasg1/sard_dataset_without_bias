namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR2;
    printIntLine(data[0]);
    delete [] data;
}
void FUN1()
{
    int * data;
    data = NULL; 
    {
        int * dataBuffer = new int[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i] = 5;
            }
        }
        data = dataBuffer;
    }
    VAR2 = data;
    FUN0();
}
} 
