namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    int VAR1[100];
    data = VAR1;
    data[0] = 5;
    printIntLine(data[0]);
    ; 
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    delete[] data;
}
} 
