namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(int64_t * data)
{
    if(VAR1)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR1 = 1; 
    FUN0(data);
}
} 
