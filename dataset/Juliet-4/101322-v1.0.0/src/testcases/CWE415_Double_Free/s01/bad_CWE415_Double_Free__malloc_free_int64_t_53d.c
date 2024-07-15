void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN1(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    free(data);
    FUN1(data);
}
void FUN4(int64_t * data);
void FUN0(int64_t * data)
{
    FUN4(data);
}
void FUN4(int64_t * data)
{
<START>
    free(data);
<END>
}
