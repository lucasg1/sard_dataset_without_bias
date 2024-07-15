namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = new int[100];
    {
        int * data = dataRef;
        {
            int source[100] = {0}; 
            memcpy(data, source, 100*sizeof(int));
            printIntLine(data[0]);
            delete [] data;
        }
    }
}
} 
