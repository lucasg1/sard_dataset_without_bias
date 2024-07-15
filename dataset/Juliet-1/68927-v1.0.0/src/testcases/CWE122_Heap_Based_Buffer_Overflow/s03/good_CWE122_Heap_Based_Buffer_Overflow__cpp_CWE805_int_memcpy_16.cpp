namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    while(1)
    {
        data = new int[100];
        break;
    }
    {
        int source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
