extern int VAR0;
int * FUN0(int * data)
{
    if(VAR0)
    {
        data = (int *)malloc(10);
        if (data == NULL) {exit(-1);}
    }
    return data;
}
int VAR0 = 0;
int * FUN0(int * data);
void FUN2()
{
    int * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
    {
        int source[10] = {0};
        size_t i;
        for (i = 0; i < 10; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printIntLine(data[0]);
        free(data);
    }
}
