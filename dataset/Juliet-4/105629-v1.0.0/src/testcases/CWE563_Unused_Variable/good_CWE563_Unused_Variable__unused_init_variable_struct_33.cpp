namespace NAMESPACE0
{
void FUN0()
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
