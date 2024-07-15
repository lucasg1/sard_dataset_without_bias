static int VAR0 = 0;
void FUN0(int * data)
{
    if(VAR0)
    {
<START>
        free(data);
<END>
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = 1; 
    FUN0(data);
}
