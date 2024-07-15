namespace NAMESPACE0
{
void FUN0()
{
    int h;
    int * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new int[100];
    }
    {
        int source[100] = {0}; 
        memmove(data, source, 100*sizeof(int));
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
