void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    data = VAR0;
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
        }
    }
}
