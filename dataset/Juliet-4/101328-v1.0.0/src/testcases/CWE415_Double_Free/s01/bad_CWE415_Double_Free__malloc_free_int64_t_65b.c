void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    free(data);
    funcPtr(data);
}
void FUN0(int64_t * data)
{
<START>
    free(data);
<END>
}
