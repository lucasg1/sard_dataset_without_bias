namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
static int * VAR3;
void FUN0()
{
    int * data = VAR1;
<START>
    free(data);
<END>
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    VAR1 = data;
    FUN0();
}
} 
