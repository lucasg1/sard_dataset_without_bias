namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    int VAR1[50];
    int VAR2[100];
    data = VAR2;
    {
        int * data = dataRef;
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
}
} 
