static int * VAR0;
static int * VAR1;
void FUN0()
{
    int * data = VAR1;
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
void FUN1()
{
    int * data;
    int VAR2[50];
    int VAR3[100];
    data = VAR3;
    VAR1 = data;
    FUN0();
}
