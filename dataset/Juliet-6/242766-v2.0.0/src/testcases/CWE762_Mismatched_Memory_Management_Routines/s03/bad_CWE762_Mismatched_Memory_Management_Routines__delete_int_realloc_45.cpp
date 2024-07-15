namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
static int * VAR3;
void FUN0()
{
    int * data = VAR1;
<START>
    delete data;
<END>
}
void FUN1()
{
    int * data;
    data = NULL;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
} 
