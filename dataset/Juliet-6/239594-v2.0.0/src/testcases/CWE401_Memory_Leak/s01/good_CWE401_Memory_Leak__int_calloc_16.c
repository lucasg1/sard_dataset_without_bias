void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = (int *)ALLOCA(100*sizeof(int));
        data[0] = 5;
        printIntLine(data[0]);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
