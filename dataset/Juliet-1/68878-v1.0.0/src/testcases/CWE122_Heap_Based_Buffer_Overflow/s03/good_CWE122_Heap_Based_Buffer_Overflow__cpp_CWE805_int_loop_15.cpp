namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = new int[100];
        break;
    }
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
    switch(6)
    {
    case 6:
        data = new int[100];
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
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
} 
