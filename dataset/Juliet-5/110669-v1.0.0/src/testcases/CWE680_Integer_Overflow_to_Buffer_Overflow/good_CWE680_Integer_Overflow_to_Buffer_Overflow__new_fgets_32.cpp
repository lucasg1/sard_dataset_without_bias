namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = -1;
    {
        int data = *dataPtr1;
        data = 20;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
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
