int64_t VAR0;
int64_t VAR1;
int64_t VAR2;
void FUN0();
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%" SCNd64, &data);
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
        data++;
<END>
        int64_t result = data;
        printLongLongLine(result);
    }
}
