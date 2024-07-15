int * VAR0;
int * VAR1;
void FUN0();
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)ALLOCA(10*sizeof(int));
    VAR1 = data;
    FUN0();
}
extern int * VAR0;
extern int * VAR1;
void FUN0()
{
    int * data = VAR1;
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
