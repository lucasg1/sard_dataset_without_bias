namespace NAMESPACE0
{
static int64_t * VAR1;
static int64_t * VAR2;
static int64_t * VAR3;
void FUN0()
{
    int64_t * data = VAR1;
<START>
    delete [] data;
<END>
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    VAR1 = data;
    FUN0();
}
} 
