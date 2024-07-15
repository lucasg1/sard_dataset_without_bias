static int * VAR0;
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR0;
<START>
<END>
    ; 
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
    VAR0 = data;
    FUN0();
}
