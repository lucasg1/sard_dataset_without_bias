int * VAR0;
int * VAR1;
int * VAR2;
void FUN0();
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    VAR0 = data;
    FUN0();
}
extern int * VAR0;
extern int * VAR1;
extern int * VAR2;
void FUN0()
{
    int * data = VAR0;
<START>
    free(data);
<END>
}
