namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
static int * VAR3;
void FUN0()
{
    int * data = VAR1;
<START>
<END>
    ; 
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    VAR1 = data;
    FUN0();
}
} 
