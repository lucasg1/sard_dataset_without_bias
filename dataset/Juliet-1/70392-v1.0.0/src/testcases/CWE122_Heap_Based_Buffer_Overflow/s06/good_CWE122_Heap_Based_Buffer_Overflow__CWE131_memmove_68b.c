int * VAR0;
int * VAR1;
void FUN0();
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(10*sizeof(int));
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
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
