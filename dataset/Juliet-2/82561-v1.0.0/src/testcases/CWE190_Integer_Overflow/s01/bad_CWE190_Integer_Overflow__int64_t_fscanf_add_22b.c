int VAR0 = 0;
void FUN0(int64_t data);
void FUN1()
{
    int64_t data;
    data = 0LL;
    fscanf (stdin, "%lld", &data);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(int64_t data)
{
    if(VAR0)
    {
        {
<START>
            int64_t result = data + 1;
<END>
            printLongLongLine(result);
        }
    }
}
