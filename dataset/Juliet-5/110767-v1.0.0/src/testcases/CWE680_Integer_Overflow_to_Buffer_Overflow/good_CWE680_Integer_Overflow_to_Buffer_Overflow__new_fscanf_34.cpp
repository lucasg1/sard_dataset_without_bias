namespace NAMESPACE0
{
typedef union
{
    int unionFirst;
    int unionSecond;
} unionType;
void FUN0()
{
    int data;
    unionType myUnion;
    data = -1;
    data = 20;
    myUnion.unionFirst = data;
    {
        int data = myUnion.unionSecond;
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
