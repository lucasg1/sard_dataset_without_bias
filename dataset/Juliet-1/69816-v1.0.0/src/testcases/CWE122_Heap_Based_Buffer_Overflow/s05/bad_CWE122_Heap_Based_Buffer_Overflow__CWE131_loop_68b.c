int * VAR0;
int * VAR1;
void FUN0();
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(10);
    VAR0 = data;
    FUN0();
}
extern int * VAR0;
extern int * VAR1;
void FUN0()
{
    int * data = VAR0;
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
        free(data);
    }
}
