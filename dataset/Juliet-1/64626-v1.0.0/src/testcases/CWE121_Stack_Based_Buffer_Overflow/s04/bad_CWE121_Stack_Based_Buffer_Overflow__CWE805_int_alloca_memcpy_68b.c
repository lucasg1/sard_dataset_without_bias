int * VAR0;
int * VAR1;
void FUN0();
void FUN1()
{
    int * data;
    int * VAR2 = (int *)ALLOCA(50*sizeof(int));
    int * VAR3 = (int *)ALLOCA(100*sizeof(int));
    data = VAR2;
    VAR0 = data;
    FUN0();
}
extern int * VAR0;
extern int * VAR1;
void FUN0()
{
    int * data = VAR0;
    {
        int source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}
