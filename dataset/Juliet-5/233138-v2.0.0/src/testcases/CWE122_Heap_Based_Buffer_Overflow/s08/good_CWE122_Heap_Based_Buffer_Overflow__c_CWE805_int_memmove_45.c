static int * VAR0;
static int * VAR1;
void FUN0()
{
    int * data = VAR1;
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
