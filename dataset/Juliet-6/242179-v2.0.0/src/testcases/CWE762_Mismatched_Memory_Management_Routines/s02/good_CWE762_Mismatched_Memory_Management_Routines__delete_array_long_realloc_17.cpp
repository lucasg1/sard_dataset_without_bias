namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    long * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
        if (data == NULL) {exit(-1);}
    }
    for(k = 0; k < 1; k++)
    {
        free(data);
    }
}
void FUN1()
{
    int h,j;
    long * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new long[100];
    }
    for(j = 0; j < 1; j++)
    {
        delete [] data;
    }
}
} 
