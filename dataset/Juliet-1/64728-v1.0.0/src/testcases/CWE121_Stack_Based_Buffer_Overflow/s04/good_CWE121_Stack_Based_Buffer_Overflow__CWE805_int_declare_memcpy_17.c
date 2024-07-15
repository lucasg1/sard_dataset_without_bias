void FUN0()
{
    int h;
    int * data;
    int VAR0[50];
    int VAR1[100];
    for(h = 0; h < 1; h++)
    {
        data = VAR1;
    }
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
    }
}
