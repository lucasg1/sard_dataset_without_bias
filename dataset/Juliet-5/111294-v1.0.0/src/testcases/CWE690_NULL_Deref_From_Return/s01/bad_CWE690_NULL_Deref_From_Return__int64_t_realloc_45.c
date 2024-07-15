static int64_t * VAR0;
static int64_t * VAR1;
void FUN0()
{
    int64_t * data = VAR0;
<START>
    data[0] = 5LL;
<END>
    printLongLongLine(data[0]);
    free(data);
}
void FUN1()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)realloc(data, 1*sizeof(int64_t));
    VAR0 = data;
    FUN0();
}
