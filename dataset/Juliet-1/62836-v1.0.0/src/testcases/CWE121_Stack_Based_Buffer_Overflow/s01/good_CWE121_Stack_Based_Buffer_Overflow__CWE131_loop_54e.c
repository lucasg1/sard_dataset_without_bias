void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    FUN2(data);
}
void FUN1(int * data);
void FUN2(int * data)
{
    FUN1(data);
}
void FUN7(int * data);
void FUN0(int * data)
{
    FUN7(data);
}
void FUN7(int * data)
{
    {
        int source[10] = {0};
        size_t i;
        for (i = 0; i < 10; i++)
        {
            data[i] = source[i];
        }
        printIntLine(data[0]);
    }
}
