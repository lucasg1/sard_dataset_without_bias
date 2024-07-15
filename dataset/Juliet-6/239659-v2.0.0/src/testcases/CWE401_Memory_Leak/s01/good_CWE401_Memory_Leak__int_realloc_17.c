void FUN0()
{
    int i,k;
    int * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    for(k = 0; k < 1; k++)
    {
        free(data);
    }
}
void FUN1()
{
    int h,j;
    int * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
    }
    for(j = 0; j < 1; j++)
    {
        ; 
    }
}
