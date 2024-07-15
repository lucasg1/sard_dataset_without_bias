void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    FUN0(data);
}
void FUN2(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    FUN2(data);
}
void FUN5(int * data);
void FUN6(int * data)
{
    FUN5(data);
}
void FUN7(int * data);
void FUN8(int * data)
{
    FUN7(data);
}
void FUN6(int * data);
void FUN0(int * data)
{
    FUN6(data);
}
void FUN8(int * data);
void FUN2(int * data)
{
    FUN8(data);
}
void FUN5(int * data)
{
    free(data);
}
void FUN7(int * data)
{
    ; 
}
