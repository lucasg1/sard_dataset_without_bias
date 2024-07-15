namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(int64_t * data)
{
    if(VAR1)
    {
<START>
        delete [] data;
<END>
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    VAR1 = 1; 
    FUN0(data);
}
} 
