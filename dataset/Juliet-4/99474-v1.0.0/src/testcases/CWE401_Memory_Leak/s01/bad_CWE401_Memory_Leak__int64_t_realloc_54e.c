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
void FUN3(int64_t * data);
void FUN0(int64_t * data)
{
    FUN3(data);
}
void FUN1(int64_t * data);
void FUN7()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    FUN1(data);
}
void FUN2(int64_t * data)
{
<START>
<END>
    ; 
}
