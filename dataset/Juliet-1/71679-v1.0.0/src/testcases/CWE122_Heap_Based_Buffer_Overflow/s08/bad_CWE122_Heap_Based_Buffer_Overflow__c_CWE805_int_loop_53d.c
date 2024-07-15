void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(50*sizeof(int));
    FUN0(data);
}
void FUN2(int * data);
void FUN0(int * data)
{
    FUN2(data);
}
void FUN4(int * data);
void FUN2(int * data)
{
    FUN4(data);
}
void FUN4(int * data)
{
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
            free(data);
        }
    }
}
