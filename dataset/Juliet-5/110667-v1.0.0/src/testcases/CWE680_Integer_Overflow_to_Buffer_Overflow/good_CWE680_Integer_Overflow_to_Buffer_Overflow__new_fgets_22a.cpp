namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
int FUN0(int data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 20;
    }
    return data;
}
int FUN1(int data)
{
    if(VAR2)
    {
        data = 20;
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int FUN0(int data);
void FUN3()
{
    int data;
    data = -1;
    VAR1 = 0; 
    data = FUN0(data);
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
    ;
}
int FUN1(int data);
void FUN5()
{
    int data;
    data = -1;
    VAR2 = 1; 
    data = FUN1(data);
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
    ;
}
} 
