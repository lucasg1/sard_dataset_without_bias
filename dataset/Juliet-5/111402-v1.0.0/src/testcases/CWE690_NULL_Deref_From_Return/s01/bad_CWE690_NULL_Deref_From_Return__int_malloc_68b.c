int * VAR0;
int * VAR1;
void FUN0();
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    VAR0 = data;
    FUN0();
}
extern int * VAR0;
extern int * VAR1;
void FUN0()
{
    int * data = VAR0;
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
