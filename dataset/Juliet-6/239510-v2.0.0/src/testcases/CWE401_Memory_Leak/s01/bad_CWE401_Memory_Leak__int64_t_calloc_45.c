static int64_t * VAR0;
static int64_t * VAR1;
static int64_t * VAR2;
void FUN0()
{
    int64_t * data = VAR0;
<START>
<END>
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR0 = data;
    FUN0();
}
