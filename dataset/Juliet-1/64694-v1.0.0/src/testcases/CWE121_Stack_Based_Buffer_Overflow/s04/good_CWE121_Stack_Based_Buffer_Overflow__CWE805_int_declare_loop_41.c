void FUN0(int * data)
{
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
        }
    }
}
void FUN1()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    data = VAR1;
    FUN0(data);
}
