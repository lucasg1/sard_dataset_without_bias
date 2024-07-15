void FUN0(int64_t * data);
void FUN1()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN0;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    funcPtr(data);
}
void FUN2(int64_t * data);
void FUN3()
{
    int64_t * data;
    void (*funcPtr) (int64_t *) = FUN2;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    free(data);
    funcPtr(data);
}
void FUN0(int64_t * data)
{
    free(data);
}
void FUN2(int64_t * data)
{
    ; 
}
