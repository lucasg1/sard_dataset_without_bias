void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN0(data);
}
void FUN3(int * data);
void FUN4(int * data)
{
    FUN3(data);
}
void FUN4(int * data);
void FUN6(int * data)
{
    FUN4(data);
}
void FUN6(int * data);
void FUN0(int * data)
{
    FUN6(data);
}
void FUN3(int * data)
{
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}
