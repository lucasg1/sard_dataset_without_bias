void FUN0()
{
    int i,k;
    long * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    for(k = 0; k < 1; k++)
    {
        ; 
    }
}
void FUN1()
{
    int h,j;
    long * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    for(j = 0; j < 1; j++)
    {
        free(data);
    }
}
