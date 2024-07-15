namespace NAMESPACE0
{
int VAR1 = 0;
void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    VAR1 = 1; 
    FUN0(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
void FUN0(int64_t * data)
{
    if(VAR1)
    {
<START>
        delete [] data;
<END>
    }
}
} 
