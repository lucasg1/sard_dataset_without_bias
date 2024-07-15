static int * VAR0;
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR0;
<START>
    free(data);
<END>
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = data;
    FUN0();
}
