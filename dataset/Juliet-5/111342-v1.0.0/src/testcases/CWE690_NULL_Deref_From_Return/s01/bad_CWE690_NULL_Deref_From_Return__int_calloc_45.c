static int * VAR0;
static int * VAR1;
void FUN0()
{
    int * data = VAR0;
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    VAR0 = data;
    FUN0();
}
