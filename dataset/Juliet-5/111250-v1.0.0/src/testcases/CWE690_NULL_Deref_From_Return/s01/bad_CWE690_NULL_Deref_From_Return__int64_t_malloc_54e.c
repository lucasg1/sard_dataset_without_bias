void FUN0(int64_t * data);
void FUN1(int64_t * data)
{
    FUN0(data);
}
void FUN1(int64_t * data);
void FUN3(int64_t * data)
{
    FUN1(data);
}
void FUN3(int64_t * data);
void FUN5(int64_t * data)
{
    FUN3(data);
}
void FUN5(int64_t * data);
void FUN7()
{
    int64_t * data;
    data = NULL; 
    data = (int64_t *)malloc(1*sizeof(int64_t));
    FUN5(data);
}
void FUN0(int64_t * data)
{
<START>
    data[0] = 5LL;
<END>
    printLongLongLine(data[0]);
    free(data);
}
