extern int VAR0;
int * FUN0(int * data)
{
    if(VAR0)
    {
        data = (int *)malloc(50*sizeof(int));
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
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
<START>
                data[i] = source[i];
<END>
            }
            printIntLine(data[0]);
            free(data);
        }
    }
}
