namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    TwoIntsClass VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    {
        TwoIntsClass * data = dataRef;
        ; 
    }
}
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * &dataRef = data;
    data = NULL;
    data = new TwoIntsClass;
    data->intOne = 0;
    data->intTwo = 0;
    printIntLine(data->intOne);
    printIntLine(data->intTwo);
    {
        TwoIntsClass * data = dataRef;
        delete data;
    }
}
} 
