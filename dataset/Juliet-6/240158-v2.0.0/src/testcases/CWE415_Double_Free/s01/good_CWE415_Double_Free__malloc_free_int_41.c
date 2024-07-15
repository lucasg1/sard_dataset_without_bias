void FUN0(int * data)
{
    free(data);
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
void FUN2(int * data)
{
    ; 
}
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    FUN2(data);
}
