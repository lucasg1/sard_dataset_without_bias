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
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
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
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
