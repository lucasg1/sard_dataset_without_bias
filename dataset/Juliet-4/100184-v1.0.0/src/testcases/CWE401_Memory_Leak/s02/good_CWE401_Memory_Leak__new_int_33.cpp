namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    int * &dataRef = data;
    data = NULL;
    int VAR1;
    data = &VAR1;
    *data = 5;
    printIntLine(*data);
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
    data = new int;
    *data = 5;
    printIntLine(*data);
    {
        int * data = dataRef;
        delete data;
    }
}
} 
