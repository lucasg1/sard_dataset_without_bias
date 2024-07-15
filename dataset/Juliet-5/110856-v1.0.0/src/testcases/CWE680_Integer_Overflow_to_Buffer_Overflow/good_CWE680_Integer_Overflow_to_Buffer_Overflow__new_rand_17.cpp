namespace NAMESPACE0
{
void FUN0()
{
    int h;
    int data;
    data = -1;
    for(h = 0; h < 1; h++)
    {
        data = 20;
    }
    {
        size_t dataBytes,i;
        int *intPointer;
        dataBytes = data * sizeof(int); 
        intPointer = (int*)new char[dataBytes];
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        delete [] intPointer;
    }
}
} 
