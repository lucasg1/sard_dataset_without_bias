void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN2(int64_t * data);
void FUN3(int64_t * data)
{
    FUN2(data);
}
void FUN1(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN7()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    free(data);
    FUN3(data);
}
void FUN9(int64_t * data);
void FUN0(int64_t * data)
{
    FUN9(data);
}
void FUN11(int64_t * data);
void FUN2(int64_t * data)
{
    FUN11(data);
}
void FUN9(int64_t * data)
{
    free(data);
}
void FUN11(int64_t * data)
{
    ; 
}
