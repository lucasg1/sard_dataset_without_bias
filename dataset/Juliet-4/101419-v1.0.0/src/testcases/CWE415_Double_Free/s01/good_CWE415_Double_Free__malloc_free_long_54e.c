void FUN0(long * data);
void FUN1(long * data)
{
    FUN0(data);
}
void FUN2(long * data);
void FUN3(long * data)
{
    FUN2(data);
}
void FUN4(long * data);
void FUN5(long * data)
{
    FUN4(data);
}
void FUN6(long * data);
void FUN7(long * data)
{
    FUN6(data);
}
void FUN5(long * data);
void FUN9()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    FUN5(data);
}
void FUN7(long * data);
void FUN11()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    FUN7(data);
}
void FUN1(long * data);
void FUN4(long * data)
{
    FUN1(data);
}
void FUN3(long * data);
void FUN6(long * data)
{
    FUN3(data);
}
void FUN0(long * data)
{
    free(data);
}
void FUN2(long * data)
{
    ; 
}
