namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        ; 
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    {
        twoIntsStruct * dataCopy = data;
        twoIntsStruct * data = dataCopy;
        delete data;
    }
}
} 
