namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(int64_t * data)
{
    if(VAR1)
    {
<START>
        free(data);
<END>
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    VAR1 = 1; 
    FUN0(data);
}
} 
