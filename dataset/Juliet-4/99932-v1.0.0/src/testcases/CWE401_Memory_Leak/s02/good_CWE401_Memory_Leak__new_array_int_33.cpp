namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    int VAR1[100];
    data = VAR1;
    data[0] = 5;
    printIntLine(data[0]);
    {
        int * data = dataRef;
        ; 
    }
}
void FUN1()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    {
        int * data = dataRef;
        delete[] data;
    }
}
} 
