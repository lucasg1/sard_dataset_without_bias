static int * VAR0;
static int * VAR1;
void FUN0()
{
    int * data = VAR1;
    if (data != NULL)
    {
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)calloc(1, sizeof(int));
    VAR1 = data;
    FUN0();
}
