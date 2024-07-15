int64_t * VAR0;
int64_t * VAR1;
int64_t * VAR2;
void FUN0();
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR0 = data;
    FUN0();
}
extern int64_t * VAR0;
extern int64_t * VAR1;
extern int64_t * VAR2;
void FUN0()
{
    int64_t * data = VAR0;
<START>
<END>
    ; 
}
