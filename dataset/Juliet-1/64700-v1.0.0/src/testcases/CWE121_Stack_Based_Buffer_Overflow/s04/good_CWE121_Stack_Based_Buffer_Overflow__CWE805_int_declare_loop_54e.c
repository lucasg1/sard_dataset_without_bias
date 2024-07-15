void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN1(int * data);
void FUN3(int * data)
{
    FUN1(data);
}
void FUN4(int * data);
void FUN0(int * data)
{
    FUN4(data);
}
void FUN3(int * data);
void FUN7()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    data = VAR1;
    FUN3(data);
}
void FUN4(int * data)
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
