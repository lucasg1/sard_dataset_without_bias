static int64_t * VAR0;
static int64_t * VAR1;
static int64_t * VAR2;
void FUN0()
{
    int64_t * data = VAR0;
<START>
    printLongLongLine(*data);
<END>
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    VAR0 = data;
    FUN0();
}
