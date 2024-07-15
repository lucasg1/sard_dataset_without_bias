static int64_t VAR0;
static int64_t VAR1;
static int64_t VAR2;
void FUN0()
{
    int64_t data = VAR0;
    {
<START>
        ++data;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    VAR0 = data;
    FUN0();
}
