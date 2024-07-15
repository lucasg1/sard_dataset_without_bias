namespace NAMESPACE0
{
static int64_t * VAR1;
static int64_t * VAR2;
static int64_t * VAR3;
void FUN0()
{
    int64_t * data = VAR1;
<START>
<END>
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR1 = data;
    FUN0();
}
} 
