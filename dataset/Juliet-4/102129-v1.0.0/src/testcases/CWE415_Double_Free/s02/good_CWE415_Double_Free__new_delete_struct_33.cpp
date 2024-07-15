namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = new twoIntsStruct;
    {
        twoIntsStruct * data = dataRef;
        delete data;
    }
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    data = new twoIntsStruct;
    delete data;
    {
        twoIntsStruct * data = dataRef;
        ; 
    }
}
} 
