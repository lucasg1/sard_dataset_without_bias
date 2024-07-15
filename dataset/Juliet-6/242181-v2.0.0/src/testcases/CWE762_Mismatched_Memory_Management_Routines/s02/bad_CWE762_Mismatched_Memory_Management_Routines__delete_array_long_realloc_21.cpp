namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(long * data)
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
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
    VAR1 = 1; 
    FUN0(data);
}
} 
