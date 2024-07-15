namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(int * data)
{
    if(VAR1)
    {
<START>
        delete data;
<END>
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    VAR1 = 1; 
    FUN0(data);
}
} 
