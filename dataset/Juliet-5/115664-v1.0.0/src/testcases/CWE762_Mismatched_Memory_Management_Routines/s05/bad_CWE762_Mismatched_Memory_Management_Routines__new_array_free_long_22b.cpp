namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(long * data);
void FUN1()
{
    long * data;
    data = NULL;
    data = new long[100];
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(long * data)
{
    if(VAR1)
    {
<START>
        free(data);
<END>
    }
}
} 
