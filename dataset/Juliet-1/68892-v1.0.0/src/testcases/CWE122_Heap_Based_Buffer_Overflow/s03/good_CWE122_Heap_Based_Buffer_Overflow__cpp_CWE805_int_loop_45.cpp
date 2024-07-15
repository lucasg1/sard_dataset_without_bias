namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR2;
    {
        int source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    VAR2 = data;
    FUN0();
}
} 
