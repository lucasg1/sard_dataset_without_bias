void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN1(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    FUN1(data);
}
void FUN4(int * data);
void FUN5(int * data)
{
    FUN4(data);
}
void FUN5(int * data);
void FUN0(int * data)
{
    FUN5(data);
}
void FUN4(int * data)
{
<START>
    free(data);
<END>
}
