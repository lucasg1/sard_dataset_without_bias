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
    data = (int *)ALLOCA(10);
    FUN2(data);
}
void FUN1(int * data);
void FUN2(int * data)
{
    FUN1(data);
}
void FUN6(int * data);
void FUN0(int * data)
{
    FUN6(data);
}
void FUN6(int * data)
{
    {
        int source[10] = {0};
        size_t i;
        for (i = 0; i < 10; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printIntLine(data[0]);
    }
}
