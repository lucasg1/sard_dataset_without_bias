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
    data = INT_MAX / 2 + 2; 
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
<START>
                intPointer[i] = 0; 
<END>
            }
            printIntLine(intPointer[0]);
            delete [] intPointer;
        }
    }
}
} 
