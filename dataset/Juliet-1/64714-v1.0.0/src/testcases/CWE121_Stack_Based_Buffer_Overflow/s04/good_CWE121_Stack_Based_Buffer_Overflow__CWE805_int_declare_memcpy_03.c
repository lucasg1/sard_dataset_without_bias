void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
void FUN1()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    if(5==5)
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
