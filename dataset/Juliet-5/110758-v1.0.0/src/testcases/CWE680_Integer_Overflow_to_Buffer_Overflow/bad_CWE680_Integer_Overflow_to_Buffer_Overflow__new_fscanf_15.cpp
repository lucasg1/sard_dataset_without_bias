namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        fscanf(stdin, "%d", &data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
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
