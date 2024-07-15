int64_t VAR0;
int64_t VAR1;
int64_t VAR2;
void FUN0();
void FUN1()
{
    int64_t data;
    data = 0LL;
    data = LLONG_MAX;
    VAR0 = data;
    FUN0();
}
extern int64_t VAR0;
extern int64_t VAR1;
extern int64_t VAR2;
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
