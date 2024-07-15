namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct data;
    twoIntsStruct &dataRef = data;
    data.intOne = 0;
    data.intTwo = 0;
    printStructLine(&data);
    {
        twoIntsStruct data = dataRef;
        data.intOne = 1;
        data.intTwo = 1;
        printStructLine(&data);
    }
}
void FUN1()
{
    twoIntsStruct data;
    twoIntsStruct &dataRef = data;
    data.intOne = 0;
    data.intTwo = 0;
    {
        twoIntsStruct data = dataRef;
        printStructLine(&data);
    }
}
} 
