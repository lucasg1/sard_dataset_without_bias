static int * VAR0;
static int * VAR1;
void FUN0()
{
    int * data = VAR0;
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
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(50*sizeof(int));
    if (data == NULL) {exit(-1);}
    VAR0 = data;
    FUN0();
}
