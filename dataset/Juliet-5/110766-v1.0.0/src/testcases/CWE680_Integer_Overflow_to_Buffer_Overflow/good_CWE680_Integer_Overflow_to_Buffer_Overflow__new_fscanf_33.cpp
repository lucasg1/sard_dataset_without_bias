namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = 20;
    {
        int data = dataRef;
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
} 
