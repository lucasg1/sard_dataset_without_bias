static int64_t VAR0;
static int64_t VAR1;
static int64_t VAR2;
void FUN0()
{
    int64_t data = VAR0;
    {
<START>
        int64_t result = data * data;
<END>
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
    VAR0 = data;
    FUN0();
}
