int64_t VAR0;
int64_t VAR1;
int64_t VAR2;
void FUN0();
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    VAR0 = data;
    FUN0();
}
extern int64_t VAR0;
extern int64_t VAR1;
extern int64_t VAR2;
void FUN0()
{
    int64_t data = VAR0;
    if(data > 0) 
    {
<START>
        int64_t result = data * 2;
<END>
        printLongLongLine(result);
    }
}
